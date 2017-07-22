package Menu
{
	import flash.display.Bitmap;
	import flash.display.SimpleButton;
	import flash.text.TextField;
	import flash.text.TextFormat; 
	
	public class Menu
	{
		//Menu Background
			[Embed(source="Assets/MenuBackground.png")]
			private var MenuBackGround:Class;
			private var MyMenuBackGround:Bitmap = new MenuBackGround;
		
		//Boton jugar
		//Unpressed
			[Embed(source="Assets/ButtonUnpressed.png")]
			private var PlayUnpressed:Class;
			private var MyPlayUnpressed:Bitmap = new PlayUnpressed;
		
		//Pressed
			[Embed(source="Assets/ButtonPressed.png")]
			private var PlayPressed:Class;
			private var MyPlayPressed:Bitmap = new PlayPressed;
			private var PlayButton:SimpleButton = new SimpleButton(MyPlayUnpressed,MyPlayUnpressed,MyPlayPressed,MyPlayPressed);
		
		//Texto
			private var PlayText:TextField = new TextField();
		
		//Boton opciones
		//Unpressed
			[Embed(source="Assets/ButtonUnpressed.png")]
			private var OptionsUnpressed:Class;
			private var MyOptionsUnpressed:Bitmap = new OptionsUnpressed;
		
		//Pressed
			[Embed(source="Assets/ButtonPressed.png")]
			private var OptionsPressed:Class;
			private var MyOptionsPressed:Bitmap = new OptionsPressed;
			private var OptionsButton:SimpleButton = new SimpleButton(MyOptionsUnpressed,MyOptionsUnpressed,MyOptionsPressed,MyOptionsPressed);
		
		//Boton Creditos
		//Unpressed
			[Embed(source="Assets/ButtonUnpressed.png")]
			private var CreditsUnpressed:Class;
			private var MyCreditsUnpressed:Bitmap = new CreditsUnpressed;
		
		//Pressed
			[Embed(source="Assets/ButtonPressed.png")]
			private var CreditsPressed:Class;
			private var MyCreditsPressed:Bitmap = new CreditsPressed;
			private var CreditsButton:SimpleButton = new SimpleButton(MyCreditsUnpressed,MyCreditsUnpressed,MyCreditsPressed,MyCreditsPressed);
		
		//Boton Salir
		//Unpressed
			[Embed(source="Assets/ButtonUnpressed.png")]
			private var ExitUnpressed:Class;
			private var MyExitUnpressed:Bitmap = new ExitUnpressed;
		
		//Pressed
			[Embed(source="Assets/ButtonPressed.png")]
			private var ExitPressed:Class;
			private var MyExitPressed:Bitmap = new ExitPressed;
			private var ExitButton:SimpleButton = new SimpleButton(MyExitUnpressed,MyExitUnpressed,MyExitPressed,MyExitPressed);
		
		//Constructor
		public function Menu()
		{
			PlayButton.x = 305;
			PlayButton.y = 100;
			PlayText.scaleX = 2;
			PlayText.x = 305;
			PlayText.x = 100;
			PlayText.text = "Jugar";
			
			OptionsButton.x = 305;
			OptionsButton.y = 200;
			
			CreditsButton.x = 305;
			CreditsButton.y = 300;
			
			ExitButton.x = 305;
			ExitButton.y = 400;
		}
		
		//Metodos
		public function getPlayButton():SimpleButton
		{
			return PlayButton;
		}
		
		public function getOptionsButton():SimpleButton
		{
			return OptionsButton;
		}
		
		public function getCreditsButton():SimpleButton
		{
			return CreditsButton;
		}
		
		public function getExitButton():SimpleButton
		{
			return ExitButton;
		}
		
		public function getBackgroundMenu():Bitmap
		{
			return MyMenuBackGround;
		}
		
		public function getPlayText():TextField
		{
			return PlayText;
		}

	}
	
	
}