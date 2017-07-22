package
{
	import Menu.Menu;
	
	import flash.display.Sprite;
	
	[SWF(width="800",height="600")]
	public class SquareDeath extends Sprite
	{
		public function SquareDeath()
		{
			
			var MyMenu:Menu = new Menu();
			
			MyMenu.PrintMenu(this);
			
		}
	}
}