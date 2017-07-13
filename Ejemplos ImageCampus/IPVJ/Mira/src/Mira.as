package
{
	import flash.display.Bitmap;
	import flash.display.Sprite;
	import flash.events.Event;
	import flash.events.MouseEvent;
	import flash.ui.Mouse;
	
	public class Mira extends Sprite
	{
		
		[Embed(source="PukeFace.jpg")]
		private var Enemy:Class;
		
		[Embed(source="Mira.png")]
		private var Sight:Class;
		
		private var MySight:Bitmap = new Sight;
		private var MyEnemy:Bitmap = new Enemy;
		
		public function Mira()
		{
			Mouse.hide();
			
			MySight.scaleX = 0.4;
			MySight.scaleY = 0.4;
			
			MyEnemy.scaleX = 0.5;
			MyEnemy.scaleY = 0.5;
			
			//Actualizacion de datos
			stage.addEventListener(Event.ENTER_FRAME, MoveEnemy);
			stage.addEventListener(Event.ENTER_FRAME, moveSight);
			stage.addEventListener(MouseEvent.MOUSE_DOWN, checkShot);
			
			//Impresion en pantalla
			addChild( MyEnemy );
			addChild( MySight );
		}
		
		public function MoveEnemy(myEvent:Event):void
		{
			if( MyEnemy.y >= 300 )
			{
				MyEnemy.y = 10;
			}
			else
			{
				MyEnemy.y = MyEnemy.y + 10;
			}
			
			if( MyEnemy.x >= 490 )
			{
				MyEnemy.x = 10;
			}
			else
			{
				MyEnemy.x = MyEnemy.x + 10;
			}
		}
		
		public function moveSight(myEvent:Event):void
		{
			MySight.x = mouseX - MySight.width / 2;
			MySight.y = mouseY - MySight.height / 2;
		}
		
		public function checkShot(myEvent:MouseEvent):void
		{
			if( MySight.hitTestObject(MyEnemy) )
			{
				MyEnemy.alpha = 0.0;	
			}
		}
		
	}
}