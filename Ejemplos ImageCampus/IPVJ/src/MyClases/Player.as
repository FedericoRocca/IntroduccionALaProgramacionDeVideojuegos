package MyClases
{
	import flash.display.Bitmap;
	import flash.display.Sprite;
	import flash.events.Event;
	import flash.events.KeyboardEvent;
	import flash.ui.Keyboard;

	public class Player extends Sprite
	{		
		
		[Embed(source="Assets/Player.png")]
		private var APlayer:Class;
		private var MyPlayer:Bitmap = new APlayer;
		private var Step:uint = 2;
		
		// Movement flags
		private var MoveUp:Boolean = false;
		private var MoveRight:Boolean = false;
		private var MoveDown:Boolean = false;
		private var MoveLeft:Boolean = false;
		
		public function Player()
		{
			
			MyPlayer.scaleX = 0.16;
			MyPlayer.scaleY = 0.16;
			MyPlayer.x = 0;
			MyPlayer.y = 0;
			MyPlayer.x = 400 - (MyPlayer.width / 2);
			MyPlayer.y = 256 - (MyPlayer.height / 2);
			addChild( MyPlayer );
			
		}
		
		public function getMoveUp():Boolean
		{
			return MoveUp;
		}
		
		public function getMoveDown():Boolean
		{
			return MoveDown;
		}
		
		public function getMoveLeft():Boolean
		{
			return MoveLeft;
		}
		
		public function getMoveRight():Boolean
		{
			return MoveRight;
		}
		
		public function MovePlayerUp():void
		{
			MoveUp = true;
		}
		
		public function MovePlayerDown():void
		{
			MoveDown = true;
		}
		
		public function MovePlayerRight():void
		{
			MoveRight = true;
		}
		
		public function MovePlayerLeft():void
		{
			MoveLeft = true;
		}
		
		public function StopMovingPlayerUp():void
		{
			MoveUp = false;
		}
		
		public function StopMovingPlayerDown():void
		{
			MoveDown = false;
		}
		
		public function StopMovingPlayerRight():void
		{
			MoveRight = false;
		}
		
		public function StopMovingPlayerLeft():void
		{
			MoveLeft = false;
		}
		
		public function DoMove():void
		{
			if( MoveUp == true && MyPlayer.y > 0 )
			{
				MyPlayer.y -= Step;
			}
			
			if( MoveDown == true && (MyPlayer.y + MyPlayer.height) < 512 )
			{
				MyPlayer.y += Step;
			}
			
			if( MoveRight == true && MyPlayer.x > 0)
			{
				MyPlayer.x -= Step;
			}
			
			if( MoveLeft == true && (MyPlayer.x + MyPlayer.width) < 800)
			{
				MyPlayer.x += Step;
			}
			
		}
	}
}