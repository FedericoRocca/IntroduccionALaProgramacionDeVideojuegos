package
{
	import MyClases.Menu;
	
	import flash.display.Sprite;
	
	[SWF(width="800",height="512")]
	
	public class SquareDeath extends Sprite
	{
		public function SquareDeath()
		{
			
			var MyMenu:Menu = new Menu();
			
			addChild( MyMenu );
			
		}
	}
}