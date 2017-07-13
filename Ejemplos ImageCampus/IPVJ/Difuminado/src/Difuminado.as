package
{
	import flash.display.Bitmap;
	import flash.display.Shape;
	import flash.display.Sprite;
	import flash.events.Event;
	import flash.events.KeyboardEvent;
	import flash.events.MouseEvent;
	import flash.ui.Keyboard;
	import flash.ui.Mouse;
	
	public class Difuminado extends Sprite
	{
		
		[Embed(source="PukeFace.jpg")]
		private var PukeFace:Class;
		
		private var objetivo:Sprite = new Sprite();
		private var subiendo:Boolean = false;
		private var bajando:Boolean = true;
		
		protected function update(event:Event):void
		{
			
			
			if( objetivo.alpha <= 0 )
			{
				subiendo = true;
				bajando = false;
			}
			else if( objetivo.alpha >= 1 )
			{
				bajando = true;
				subiendo = false;
			}
			
			if( bajando == true )
			{
				objetivo.alpha -= 0.05;
			}
			else
			{
				objetivo.alpha += 0.05;
			}
			
		}
		
		public function Difuminado()
		{
			
			var MyFace:Bitmap = new PukeFace;
			
			objetivo.graphics.beginFill(0x0000ff);
			objetivo.graphics.drawRect(0,0,100,100);
			objetivo.graphics.endFill();
			
			stage.addEventListener(Event.ENTER_FRAME, update);
			
			addChild( objetivo );
			addChild( MyFace );
			
		}
	}
}