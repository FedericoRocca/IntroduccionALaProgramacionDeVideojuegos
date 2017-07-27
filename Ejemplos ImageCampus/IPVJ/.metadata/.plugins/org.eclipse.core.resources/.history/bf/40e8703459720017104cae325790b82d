package MyClases
{
	import flash.display.Bitmap;
	import flash.display.Sprite;
	import flash.events.Event;
	import flash.events.KeyboardEvent;
	import flash.geom.Matrix;
	import flash.geom.Point;
	import flash.geom.Rectangle;
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
		
		public function getX():int
		{
			return MyPlayer.x;
		}
		
		public function getY():int
		{
			return MyPlayer.y;
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
				//MyPlayer.rotation = 270;
				RotateAroundCenter(MyPlayer, 270);
				MyPlayer.y -= Step;
			}
			
			if( MoveDown == true && (MyPlayer.y + MyPlayer.height) < 512 )
			{
				//MyPlayer.rotation = 90;
				RotateAroundCenter(MyPlayer, 90);
				MyPlayer.y += Step;
			}
			
			if( MoveRight == true && MyPlayer.x > 0)
			{
				//MyPlayer.rotation = 0;
				RotateAroundCenter(MyPlayer, 0);
				MyPlayer.x += Step;
			}
			
			if( MoveLeft == true && (MyPlayer.x + MyPlayer.width) < 800)
			{
				//MyPlayer.rotation = 180;
				RotateAroundCenter(MyPlayer, 180);
				MyPlayer.x -= Step;
			}
			
			//Rotaciones 45
			
			if( MoveDown == true && MoveRight == true )
			{
				RotateAroundCenter(MyPlayer, 45 );
			}
			
			if( MoveDown == true && MoveLeft == true )
			{
				RotateAroundCenter(MyPlayer, 135 );
			}
			
			if( MoveLeft == true && MoveUp == true)
			{
				RotateAroundCenter(MyPlayer, 225 );
			}
			
			if( MoveUp == true && MoveRight == true)
			{
				RotateAroundCenter(MyPlayer, 315 );
			}
			
		}
		
		public function RotateAroundCenter(obj:Object, rotation:Number):void
		{
			
			var bound:Rectangle = new Rectangle();
			// get the bounded rectangle of objects
			bound = obj.getRect(this);
			
			// calculate mid poits
			var midx1:Number = bound.x + bound.width/2;
			var midy1:Number = bound.y + bound.height/2;
			
			// assign the rotation
			obj.rotation = rotation;
			
			// assign the previous mid point as (x,y)
			obj.x = midx1;
			obj.y = midy1;
			
			// get the new bounded rectangle of objects
			bound = obj.getRect(this);
			
			// calculate new mid points
			var midx2:Number = bound.x + bound.width/2;
			var midy2:Number = bound.y + bound.height/2;
			
			// calculate differnece between the current mid and (x,y) and subtract
			//it to position the object in the previous bound.
			var diff:Number = midx2 - obj.x;
			obj.x -= diff;
			diff = midy2 - obj.y;
			obj.y -= diff;
		}
		
	}
}