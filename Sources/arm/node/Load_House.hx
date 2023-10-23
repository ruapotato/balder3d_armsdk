package arm.node;

@:access(armory.logicnode.LogicNode)@:keep class Load_House extends armory.logicnode.LogicTree {

	var functionNodes:Map<String, armory.logicnode.FunctionNode>;

	var functionOutputNodes:Map<String, armory.logicnode.FunctionOutputNode>;

	public function new() {
		super();
		this.functionNodes = new Map();
		this.functionOutputNodes = new Map();
		notifyOnAdd(add);
	}

	override public function add() {
		var _SetSceneActive = new armory.logicnode.SetSceneNode(this);
		_SetSceneActive.preallocInputs(2);
		_SetSceneActive.preallocOutputs(2);
		var _RemoveSceneActive = new armory.logicnode.RemoveActiveSceneNode(this);
		_RemoveSceneActive.preallocInputs(1);
		_RemoveSceneActive.preallocOutputs(1);
		var _OnContact = new armory.logicnode.OnContactNode(this);
		_OnContact.property0 = "begin";
		_OnContact.preallocInputs(2);
		_OnContact.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.ObjectNode(this, ""), _OnContact, 0, 0);
		var _GetObjectbyName = new armory.logicnode.GetObjectNode(this);
		_GetObjectbyName.preallocInputs(1);
		_GetObjectbyName.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.StringNode(this, "player"), _GetObjectbyName, 0, 0);
		armory.logicnode.LogicNode.addLink(_GetObjectbyName, _OnContact, 0, 1);
		armory.logicnode.LogicNode.addLink(_OnContact, _RemoveSceneActive, 0, 0);
		armory.logicnode.LogicNode.addLink(_RemoveSceneActive, _SetSceneActive, 0, 0);
		var _Scene = new armory.logicnode.SceneNode(this);
		_Scene.property0 = "level2";
		_Scene.preallocInputs(0);
		_Scene.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(_Scene, _SetSceneActive, 0, 1);
		armory.logicnode.LogicNode.addLink(_SetSceneActive, new armory.logicnode.NullNode(this), 0, 0);
		armory.logicnode.LogicNode.addLink(_SetSceneActive, new armory.logicnode.ObjectNode(this, ""), 1, 0);
	}
}