package
{
	import flash.display.Shape;
	import flash.display.Sprite;
	import flash.events.Event;
	import flash.events.KeyboardEvent;
	import flash.events.MouseEvent;
	import flash.ui.Keyboard;
	import flash.ui.Mouse;
	
	public class EjemploMira extends Sprite
	{
		private var mira:Sprite = new  Sprite();
		private var objetivo:Sprite = new Sprite();
		
		public function EjemploMira()
		{
			Mouse.hide();
			
			
			objetivo.graphics.beginFill(0x0000ff);
			objetivo.graphics.drawRect(0,0,100,100);
			objetivo.graphics.endFill();
			
			addChild(objetivo);
			
			stage.addEventListener(MouseEvent.CLICK, onClick);
			
			
			stage.addEventListener(KeyboardEvent.KEY_DOWN, onKeyDown);
			
			mira.graphics.beginFill(0xff0000, 0.5);
			mira.graphics.drawCircle(0,0,50);
			mira.graphics.endFill();
			
			addChild(mira);
			
			stage.addEventListener(MouseEvent.MOUSE_MOVE, onMove);
			
			
			stage.addEventListener(Event.ENTER_FRAME, update);
		}
		
		protected function update(event:Event):void
		{
			objetivo.y++;
		}
		
		protected function onKeyDown(event:KeyboardEvent):void
		{
			if (event.keyCode == Keyboard.RIGHT)
			{
				objetivo.x += 10;
			}
		}
		
		protected function onClick(event:MouseEvent):void
		{
			if ( mira.hitTestObject(objetivo) )
			{
				objetivo.alpha = 0.0;
			}
		}
		
		protected function onMove(event:MouseEvent):void
		{
			mira.x = mouseX;
			mira.y = mouseY;
		}
	}
}