package MyClases
{
	import flash.display.Bitmap;
	import flash.display.SimpleButton;
	import flash.display.Sprite;
	import flash.events.MouseEvent;
	import flash.text.TextField;
	import flash.text.TextFieldAutoSize;
	import flash.text.TextFormat;
	import flash.ui.Mouse;

	public class SDButton extends Sprite
	{
		
		[Embed(source="Assets/Button.png")]
		private var AButton:Class;
		private var MyButton:Bitmap = new AButton;
		
		[Embed(source="Assets/ButtonPressed.png")]
		private var PressedButton:Class;
		private var MyPressedButton:Bitmap = new PressedButton;
		
		[Embed(source="Assets/ButtonHover.png")]
		private var ButtonHover:Class;
		private var MyButtonHover:Bitmap = new ButtonHover;
		
		private var ThisButton:SimpleButton = new SimpleButton(MyButton, MyButtonHover, MyPressedButton, MyPressedButton);
		
		public var TextButton:TextField = new TextField();
		
		public function SDButton(MyText:String, PosY:uint)
		{
			
			ThisButton.x = 400 - ( ThisButton.width / 2 );
			ThisButton.y = PosY;
			
			var MyTextFormat:TextFormat = new TextFormat();
			
			MyTextFormat.bold = true;
			MyTextFormat.size = 24;
			MyTextFormat.font = "Courier New" ;
			MyTextFormat.color = 0x4B705A;
			
			TextButton.defaultTextFormat = MyTextFormat;
			TextButton.autoSize = TextFieldAutoSize.CENTER;
			TextButton.mouseEnabled = false;
			TextButton.text = MyText; 
			TextButton.x = ThisButton.x + ( ( ThisButton.width / 2 ) - (TextButton.width / 2) );
			TextButton.y = ThisButton.y + 8;
			
			ThisButton.addEventListener(MouseEvent.MOUSE_DOWN, MoveDownButton);
			ThisButton.addEventListener(MouseEvent.MOUSE_UP, MoveUpButton);
			
			addChild( ThisButton );
			addChild( TextButton );
		}
		
		protected function MoveUpButton(event:MouseEvent):void
		{
			ThisButton.y = ThisButton.y - 4;
			TextButton.y = TextButton.y - 4;
			
		}
		
		protected function MoveDownButton(event:MouseEvent):void
		{
			ThisButton.y = ThisButton.y + 4;
			TextButton.y = TextButton.y + 4;
		}		
		
		
	}
}