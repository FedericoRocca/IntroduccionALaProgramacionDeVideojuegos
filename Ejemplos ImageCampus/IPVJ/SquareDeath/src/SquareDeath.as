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
			
			addChild( MyMenu.getBackgroundMenu() );
			addChild( MyMenu.getPlayButton() );
			addChild( MyMenu.getOptionsButton() );
			addChild( MyMenu.getCreditsButton() );
			addChild( MyMenu.getExitButton() );
		}
	}
}