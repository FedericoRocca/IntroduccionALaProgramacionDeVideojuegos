package Menu
{
	import flash.display.Bitmap;
	import flash.display.SimpleButton;
	import flash.display.Sprite;
	import flash.text.TextField;
	import flash.text.TextFieldAutoSize;
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
			
			private var OptionsText:TextField = new TextField();
		
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
		
			private var CreditsText:TextField = new TextField();
			
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
			
			private var ExitText:TextField = new TextField();
			
		//Textformat para el texto de los botones
			private var MyTextFormat:TextFormat = new TextFormat();
			
		//Constructor
		public function Menu()
		{
			
			MyTextFormat.size = 24;
			MyTextFormat.bold = true;
			MyTextFormat.color = "0xffffff";
			
			PlayButton.x = 305;
			PlayButton.y = 100;

			PlayText.autoSize = TextFieldAutoSize.CENTER;
			PlayText.mouseEnabled = false;
			PlayText.x = PlayButton.x + ( ( PlayButton.width / 2 ) - ( PlayText.width / 2 ) );
			PlayText.y = PlayButton.y + ( ( PlayButton.height / 2 ) - 20);
			PlayText.defaultTextFormat = MyTextFormat;
			PlayText.alpha = 0.7;
			PlayText.text = "Jugar";
			
			OptionsButton.x = 305;
			OptionsButton.y = 200;
			
			OptionsText.autoSize = TextFieldAutoSize.CENTER;
			OptionsText.mouseEnabled = false;
			OptionsText.x = OptionsButton.x + ( ( OptionsButton.width / 2 ) - ( OptionsText.width / 2 ) );
			OptionsText.y = OptionsButton.y + ( ( OptionsButton.height / 2 ) - 20);
			OptionsText.defaultTextFormat = MyTextFormat;
			OptionsText.alpha = 0.7;
			OptionsText.text = "Opciones";
			
			CreditsButton.x = 305;
			CreditsButton.y = 300;
			
			CreditsText.autoSize = TextFieldAutoSize.CENTER;
			CreditsText.mouseEnabled = false;
			CreditsText.x = CreditsButton.x + ( ( CreditsButton.width / 2 ) - ( CreditsText.width / 2 ) );
			CreditsText.y = CreditsButton.y + ( ( CreditsButton.height / 2 ) - 20);
			CreditsText.defaultTextFormat = MyTextFormat;
			CreditsText.alpha = 0.7;
			CreditsText.text = "Creditos";
			
			ExitButton.x = 305;
			ExitButton.y = 400;
			
			ExitText.autoSize = TextFieldAutoSize.CENTER;
			ExitText.mouseEnabled = false;
			ExitText.x = ExitButton.x + ( ( ExitButton.width / 2 ) - ( ExitText.width / 2 ) );
			ExitText.y = ExitButton.y + ( ( ExitButton.height / 2 ) - 20);
			ExitText.defaultTextFormat = MyTextFormat;
			ExitText.alpha = 0.7;
			ExitText.text = "Salir";
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
		
		public function getOptionsText():TextField
		{
			return OptionsText;
		}
		
		public function getCreditsText():TextField
		{
			return CreditsText;
		}
		
		public function getExitText():TextField
		{
			return ExitText;
		}
		
		public function PrintMenu(MainStage:Sprite):void
		{
			MainStage.addChild( getBackgroundMenu() );
			MainStage.addChild( getPlayButton() );
			MainStage.addChild( getPlayText() );
			MainStage.addChild( getOptionsButton() );
			MainStage.addChild( getOptionsText() );
			MainStage.addChild( getCreditsButton() );
			MainStage.addChild( getCreditsText() );
			MainStage.addChild( getExitButton() );
			MainStage.addChild( getExitText() );
		}

	}
	
	
}