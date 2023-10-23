package arm.node;

@:access(armory.logicnode.LogicNode)@:keep class Player_spawn extends armory.logicnode.LogicTree {

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
		var _RemoveCollection = new armory.logicnode.RemoveGroupNode(this);
		_RemoveCollection.preallocInputs(2);
		_RemoveCollection.preallocOutputs(1);
		var _SetCursorState = new armory.logicnode.SetCursorStateNode(this);
		_SetCursorState.property0 = "hide locked";
		_SetCursorState.preallocInputs(2);
		_SetCursorState.preallocOutputs(1);
		var _OnEvent = new armory.logicnode.OnEventNode(this);
		_OnEvent.property1 = "init";
		_OnEvent.preallocInputs(1);
		_OnEvent.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.StringNode(this, "load_menu"), _OnEvent, 0, 0);
		armory.logicnode.LogicNode.addLink(_OnEvent, _SetCursorState, 0, 0);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.BooleanNode(this, false), _SetCursorState, 0, 1);
		armory.logicnode.LogicNode.addLink(_SetCursorState, _RemoveCollection, 0, 0);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.StringNode(this, "active"), _RemoveCollection, 0, 1);
		armory.logicnode.LogicNode.addLink(_RemoveCollection, _RemoveSceneActive, 0, 0);
		armory.logicnode.LogicNode.addLink(_RemoveSceneActive, _SetSceneActive, 0, 0);
		var _Scene = new armory.logicnode.SceneNode(this);
		_Scene.property0 = "menu";
		_Scene.preallocInputs(0);
		_Scene.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(_Scene, _SetSceneActive, 0, 1);
		armory.logicnode.LogicNode.addLink(_SetSceneActive, new armory.logicnode.NullNode(this), 0, 0);
		armory.logicnode.LogicNode.addLink(_SetSceneActive, new armory.logicnode.ObjectNode(this, ""), 1, 0);
		var _SendGlobalEvent = new armory.logicnode.SendGlobalEventNode(this);
		_SendGlobalEvent.preallocInputs(2);
		_SendGlobalEvent.preallocOutputs(1);
		var _Keyboard = new armory.logicnode.MergedKeyboardNode(this);
		_Keyboard.property0 = "started";
		_Keyboard.property1 = "r";
		_Keyboard.preallocInputs(0);
		_Keyboard.preallocOutputs(2);
		armory.logicnode.LogicNode.addLink(_Keyboard, new armory.logicnode.BooleanNode(this, false), 1, 0);
		armory.logicnode.LogicNode.addLink(_Keyboard, _SendGlobalEvent, 0, 0);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.StringNode(this, "load_menu"), _SendGlobalEvent, 0, 1);
		armory.logicnode.LogicNode.addLink(_SendGlobalEvent, new armory.logicnode.NullNode(this), 0, 0);
	}
}