package arm.node;

@:access(armory.logicnode.LogicNode)@:keep class AddItems extends armory.logicnode.LogicTree {

	var functionNodes:Map<String, armory.logicnode.FunctionNode>;

	var functionOutputNodes:Map<String, armory.logicnode.FunctionOutputNode>;

	public function new() {
		super();
		this.functionNodes = new Map();
		this.functionOutputNodes = new Map();
		notifyOnAdd(add);
	}

	override public function add() {
		var _SetObjectLocation_001 = new armory.logicnode.SetLocationNode(this);
		_SetObjectLocation_001.preallocInputs(4);
		_SetObjectLocation_001.preallocOutputs(1);
		var _SpawnObjectByName = new armory.logicnode.SpawnObjectByNameNode(this);
		_SpawnObjectByName.property0 = "player";
		_SpawnObjectByName.preallocInputs(4);
		_SpawnObjectByName.preallocOutputs(2);
		var _Gate = new armory.logicnode.GateNode(this);
		_Gate.property0 = "Equal";
		_Gate.property1 = 9.999999747378752e-05;
		_Gate.preallocInputs(3);
		_Gate.preallocOutputs(2);
		var _ArrayLoop = new armory.logicnode.ArrayLoopNode(this);
		_ArrayLoop.preallocInputs(2);
		_ArrayLoop.preallocOutputs(4);
		var _OnTimer = new armory.logicnode.OnTimerNode(this);
		_OnTimer.preallocInputs(2);
		_OnTimer.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.FloatNode(this, 20.0), _OnTimer, 0, 0);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.BooleanNode(this, true), _OnTimer, 0, 1);
		armory.logicnode.LogicNode.addLink(_OnTimer, _ArrayLoop, 0, 0);
		var _GetCollection = new armory.logicnode.GetGroupNode(this);
		_GetCollection.preallocInputs(1);
		_GetCollection.preallocOutputs(1);
		var _ConcatenateString_002 = new armory.logicnode.ConcatenateStringNode(this);
		_ConcatenateString_002.preallocInputs(2);
		_ConcatenateString_002.preallocOutputs(1);
		var _GetSceneActive_002 = new armory.logicnode.ActiveSceneNode(this);
		_GetSceneActive_002.preallocInputs(0);
		_GetSceneActive_002.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(_GetSceneActive_002, _ConcatenateString_002, 0, 0);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.StringNode(this, "_item_load"), _ConcatenateString_002, 0, 1);
		armory.logicnode.LogicNode.addLink(_ConcatenateString_002, _GetCollection, 0, 0);
		armory.logicnode.LogicNode.addLink(_GetCollection, _ArrayLoop, 0, 1);
		armory.logicnode.LogicNode.addLink(_ArrayLoop, new armory.logicnode.NullNode(this), 3, 0);
		armory.logicnode.LogicNode.addLink(_ArrayLoop, _Gate, 0, 0);
		var _RandomInteger = new armory.logicnode.RandomIntegerNode(this);
		_RandomInteger.preallocInputs(2);
		_RandomInteger.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.IntegerNode(this, 0), _RandomInteger, 0, 0);
		var _ArrayLength = new armory.logicnode.ArrayLengthNode(this);
		_ArrayLength.preallocInputs(1);
		_ArrayLength.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(_GetCollection, _ArrayLength, 0, 0);
		armory.logicnode.LogicNode.addLink(_ArrayLength, _RandomInteger, 0, 1);
		armory.logicnode.LogicNode.addLink(_RandomInteger, _Gate, 0, 1);
		armory.logicnode.LogicNode.addLink(_ArrayLoop, _Gate, 2, 2);
		armory.logicnode.LogicNode.addLink(_Gate, new armory.logicnode.NullNode(this), 1, 0);
		armory.logicnode.LogicNode.addLink(_Gate, _SpawnObjectByName, 0, 0);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.StringNode(this, "item_bullet_b"), _SpawnObjectByName, 0, 1);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.NullNode(this), _SpawnObjectByName, 0, 2);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.BooleanNode(this, true), _SpawnObjectByName, 0, 3);
		armory.logicnode.LogicNode.addLink(_SpawnObjectByName, _SetObjectLocation_001, 0, 0);
		armory.logicnode.LogicNode.addLink(_SpawnObjectByName, _SetObjectLocation_001, 1, 1);
		var _GetObjectLocation = new armory.logicnode.GetLocationNode(this);
		_GetObjectLocation.preallocInputs(2);
		_GetObjectLocation.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(_ArrayLoop, _GetObjectLocation, 1, 0);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.BooleanNode(this, false), _GetObjectLocation, 0, 1);
		armory.logicnode.LogicNode.addLink(_GetObjectLocation, _SetObjectLocation_001, 0, 2);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.BooleanNode(this, false), _SetObjectLocation_001, 0, 3);
		armory.logicnode.LogicNode.addLink(_SetObjectLocation_001, new armory.logicnode.NullNode(this), 0, 0);
	}
}