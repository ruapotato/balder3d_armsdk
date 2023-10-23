package arm.node;

@:access(armory.logicnode.LogicNode)@:keep class Item_box extends armory.logicnode.LogicTree {

	var functionNodes:Map<String, armory.logicnode.FunctionNode>;

	var functionOutputNodes:Map<String, armory.logicnode.FunctionOutputNode>;

	public function new() {
		super();
		this.functionNodes = new Map();
		this.functionOutputNodes = new Map();
		notifyOnAdd(add);
	}

	override public function add() {
		var _RemoveObject = new armory.logicnode.RemoveObjectNode(this);
		_RemoveObject.preallocInputs(4);
		_RemoveObject.preallocOutputs(1);
		var _Sleep = new armory.logicnode.SleepNode(this);
		_Sleep.preallocInputs(2);
		_Sleep.preallocOutputs(1);
		var _SetObjectProperty = new armory.logicnode.SetPropertyNode(this);
		_SetObjectProperty.preallocInputs(4);
		_SetObjectProperty.preallocOutputs(1);
		var _IsTrue = new armory.logicnode.IsTrueNode(this);
		_IsTrue.preallocInputs(2);
		_IsTrue.preallocOutputs(1);
		var _ArrayLoop = new armory.logicnode.ArrayLoopNode(this);
		_ArrayLoop.preallocInputs(2);
		_ArrayLoop.preallocOutputs(4);
		var _OnContactArray = new armory.logicnode.OnContactArrayNode(this);
		_OnContactArray.property0 = "begin";
		_OnContactArray.preallocInputs(2);
		_OnContactArray.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.ObjectNode(this, ""), _OnContactArray, 0, 0);
		var _GetCollection = new armory.logicnode.GetGroupNode(this);
		_GetCollection.preallocInputs(1);
		_GetCollection.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.StringNode(this, "active"), _GetCollection, 0, 0);
		armory.logicnode.LogicNode.addLink(_GetCollection, _OnContactArray, 0, 1);
		armory.logicnode.LogicNode.addLink(_OnContactArray, _ArrayLoop, 0, 0);
		armory.logicnode.LogicNode.addLink(_GetCollection, _ArrayLoop, 0, 1);
		armory.logicnode.LogicNode.addLink(_ArrayLoop, new armory.logicnode.IntegerNode(this, 0), 2, 0);
		armory.logicnode.LogicNode.addLink(_ArrayLoop, new armory.logicnode.NullNode(this), 3, 0);
		armory.logicnode.LogicNode.addLink(_ArrayLoop, _IsTrue, 0, 0);
		var _HasContact = new armory.logicnode.HasContactNode(this);
		_HasContact.preallocInputs(2);
		_HasContact.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.ObjectNode(this, ""), _HasContact, 0, 0);
		armory.logicnode.LogicNode.addLink(_ArrayLoop, _HasContact, 1, 1);
		armory.logicnode.LogicNode.addLink(_HasContact, _IsTrue, 0, 1);
		armory.logicnode.LogicNode.addLink(_IsTrue, _SetObjectProperty, 0, 0);
		armory.logicnode.LogicNode.addLink(_ArrayLoop, _SetObjectProperty, 1, 1);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.StringNode(this, "gun_type"), _SetObjectProperty, 0, 2);
		var _String = new armory.logicnode.StringNode(this);
		_String.preallocInputs(1);
		_String.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.StringNode(this, "b"), _String, 0, 0);
		armory.logicnode.LogicNode.addLink(_String, _SetObjectProperty, 0, 3);
		armory.logicnode.LogicNode.addLink(_SetObjectProperty, _Sleep, 0, 0);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.FloatNode(this, 1.0), _Sleep, 0, 1);
		armory.logicnode.LogicNode.addLink(_Sleep, _RemoveObject, 0, 0);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.ObjectNode(this, ""), _RemoveObject, 0, 1);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.BooleanNode(this, true), _RemoveObject, 0, 2);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.BooleanNode(this, true), _RemoveObject, 0, 3);
		armory.logicnode.LogicNode.addLink(_RemoveObject, new armory.logicnode.NullNode(this), 0, 0);
	}
}