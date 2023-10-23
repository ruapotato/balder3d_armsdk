package arm.node;

@:access(armory.logicnode.LogicNode)@:keep class Menu extends armory.logicnode.LogicTree {

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
		var _OnCanvasElement = new armory.logicnode.OnCanvasElementNode(this);
		_OnCanvasElement.property0 = "click";
		_OnCanvasElement.property1 = "started";
		_OnCanvasElement.property2 = "left";
		_OnCanvasElement.preallocInputs(1);
		_OnCanvasElement.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.StringNode(this, "start"), _OnCanvasElement, 0, 0);
		armory.logicnode.LogicNode.addLink(_OnCanvasElement, _RemoveSceneActive, 0, 0);
		armory.logicnode.LogicNode.addLink(_RemoveSceneActive, _SetSceneActive, 0, 0);
		var _Scene = new armory.logicnode.SceneNode(this);
		_Scene.property0 = "level2";
		_Scene.preallocInputs(0);
		_Scene.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(_Scene, _SetSceneActive, 0, 1);
		armory.logicnode.LogicNode.addLink(_SetSceneActive, new armory.logicnode.NullNode(this), 0, 0);
		armory.logicnode.LogicNode.addLink(_SetSceneActive, new armory.logicnode.ObjectNode(this, ""), 1, 0);
		var _SetCanvasText = new armory.logicnode.CanvasSetTextNode(this);
		_SetCanvasText.preallocInputs(3);
		_SetCanvasText.preallocOutputs(1);
		var _OnUpdate = new armory.logicnode.OnUpdateNode(this);
		_OnUpdate.property0 = "Update";
		_OnUpdate.preallocInputs(0);
		_OnUpdate.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(_OnUpdate, _SetCanvasText, 0, 0);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.StringNode(this, "NUMAI"), _SetCanvasText, 0, 1);
		var _ConcatenateString = new armory.logicnode.ConcatenateStringNode(this);
		_ConcatenateString.preallocInputs(2);
		_ConcatenateString.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.StringNode(this, "Num AIS: "), _ConcatenateString, 0, 0);
		var _Math_001 = new armory.logicnode.MathNode(this);
		_Math_001.property0 = "Floor";
		_Math_001.property1 = false;
		_Math_001.preallocInputs(1);
		_Math_001.preallocOutputs(1);
		var _Math_002 = new armory.logicnode.MathNode(this);
		_Math_002.property0 = "Add";
		_Math_002.property1 = false;
		_Math_002.preallocInputs(2);
		_Math_002.preallocOutputs(1);
		var _Math = new armory.logicnode.MathNode(this);
		_Math.property0 = "Multiply";
		_Math.property1 = false;
		_Math.preallocInputs(2);
		_Math.preallocOutputs(1);
		var _Integer = new armory.logicnode.IntegerNode(this);
		_Integer.preallocInputs(1);
		_Integer.preallocOutputs(1);
		var _GetCanvasSlider = new armory.logicnode.CanvasGetSliderNode(this);
		_GetCanvasSlider.preallocInputs(1);
		_GetCanvasSlider.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.StringNode(this, "AIs"), _GetCanvasSlider, 0, 0);
		armory.logicnode.LogicNode.addLink(_GetCanvasSlider, _Integer, 0, 0);
		armory.logicnode.LogicNode.addLink(_Integer, _Math, 0, 0);
		var _Integer_001 = new armory.logicnode.IntegerNode(this);
		_Integer_001.preallocInputs(1);
		_Integer_001.preallocOutputs(1);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.IntegerNode(this, 3), _Integer_001, 0, 0);
		armory.logicnode.LogicNode.addLink(_Integer_001, _Math, 0, 1);
		armory.logicnode.LogicNode.addLink(_Math, _Math_002, 0, 0);
		armory.logicnode.LogicNode.addLink(new armory.logicnode.FloatNode(this, 1.0), _Math_002, 0, 1);
		armory.logicnode.LogicNode.addLink(_Math_002, _Math_001, 0, 0);
		armory.logicnode.LogicNode.addLink(_Math_001, _ConcatenateString, 0, 1);
		armory.logicnode.LogicNode.addLink(_ConcatenateString, _SetCanvasText, 0, 2);
		armory.logicnode.LogicNode.addLink(_SetCanvasText, new armory.logicnode.NullNode(this), 0, 0);
	}
}