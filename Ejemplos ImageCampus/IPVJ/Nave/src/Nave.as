package
{
	import flash.display.Bitmap;
	import flash.display.Sprite;
	import flash.events.Event;
	import flash.events.KeyboardEvent;
	import flash.ui.Keyboard;
	
	public class Nave extends Sprite
	{
		// Nave del jugador
		[Embed(source="Nave.png")]
		private var Ship:Class;
		private var MyShip:Bitmap = new Ship;
		
		// Naves enemigas
		[Embed(source="Enemigo.png")]
		private var Enemy:Class;
		private var MyEnemy:Bitmap = new Enemy;
		
		private var Enemies:Vector.<Bitmap> = new Vector.<Bitmap>();
		private var MoveLeft:Boolean = false;
		private var MoveRight:Boolean = false;
		
		public function Nave()
		{
			// Escalo la nave, porque es way too fucking high
			MyShip.scaleX = 0.2;
			MyShip.scaleY = 0.2;
			
			// Posiciono la nave en una posicion nice
			MyShip.x = 215;
			MyShip.y = 300;
			
			// Creo las naves enemigas
			var MaxEnemies:int = 5;
			for(var i:int = 0; i < MaxEnemies; i++)
			{
				Enemies.push( new Enemy );
			}
			
			// Escalo la nave enemiga, fucking high
			for(i = 0; i < Enemies.length; i++)
			{
				Enemies[i].scaleX = 0.03;
				Enemies[i].scaleY = 0.03;
			}
			
			
			// Posiciono los enemigos
			for(i = 0; i < Enemies.length; i++)
			{
				Enemies[i].y = -30;
				Enemies[i].x = Math.random() * 390 + 1;
			}
			
			// Manejo de eventos de teclado
			stage.addEventListener(KeyboardEvent.KEY_DOWN, MoveShip);
			
			// Manejo de eventos de teclado
			stage.addEventListener(KeyboardEvent.KEY_UP, StopShip);
			
			// Movimientos de enemigos
			stage.addEventListener(Event.ENTER_FRAME, UpdateEnemies);
			
			// Chequeo de colisiones
			stage.addEventListener(Event.ENTER_FRAME, CheckCollisions);
			
			// Dibujado
			addChild( MyShip );
			for(i = 0; i < Enemies.length; i++)
			{
				addChild( Enemies[i] );
			}
		}
		
		public function MoveShip(MyEvent:KeyboardEvent):void
		{
			if( MyEvent.keyCode == Keyboard.RIGHT)
			{
				MoveRight = true;
			}
			
			if( MyEvent.keyCode == Keyboard.RIGHT)
			{
				MoveLeft = true;
			}
			
			if(MoveLeft && MyShip.x >= 10 )
			{
				MyShip.x -= 6;
			}
			
			if(MoveRight && MyShip.x <= 410 )
			{
				MyShip.x += 6;
			}
			/*
			if( MyEvent.keyCode == Keyboard.RIGHT && MyShip.x <= 410 )
			{
				MyShip.x += 6;
			}
			
			if( MyEvent.keyCode == Keyboard.LEFT && MyShip.x >= 10 )
			{
				MyShip.x -= 6;
			}
			*/
		}
		
		public function StopShip(MyEvent:KeyboardEvent):void
		{
			if( MyEvent.keyCode == Keyboard.RIGHT)
			{
				MoveRight = false;
			}
			
			if( MyEvent.keyCode == Keyboard.RIGHT)
			{
				MoveLeft = false;
			}
		}
		
		public function UpdateEnemies(MyEvent:Event):void
		{
			var Movement:int = 6;
			for(var i:int = 0; i < Enemies.length; i++)
			{
				Enemies[i].y += Movement;
				if( Enemies[i].y >= 385 )
				{
					Enemies[i].y = -30;
					Enemies[i].x = Math.random() * 390 + 1;
				}
			}
		}
		
		public function CheckCollisions(MyEvent:Event):void
		{
			for(var i:int = 0; i < Enemies.length; i++)
			{
				if(MyShip.hitTestObject(Enemies[i]) == true)
				{
					MyShip.alpha = 0;
				}
			}
			
		}
		
	}
}