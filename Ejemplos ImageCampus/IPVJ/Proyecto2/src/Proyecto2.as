package
{
	import flash.display.Shape;
	import flash.display.Sprite;
	import flash.text.TextField;
	
	public class Proyecto2 extends Sprite
	{
		public function Proyecto2()
		{
			
			var cuadrado:Shape = new Shape();
			cuadrado.graphics.beginFill(0xff0000);
			cuadrado.graphics.lineStyle(5, 0x00ff00);
			cuadrado.graphics.drawRect(0, 0, 100, 100);
			cuadrado.graphics.endFill();
			
			var circulo:Shape = new Shape();
			circulo.graphics.beginFill(0x00ff00);
			circulo.graphics.lineStyle(5,0xff0000);
			circulo.graphics.drawCircle(450, 325, 50);
			circulo.graphics.endFill();
			
			var elipse:Shape = new Shape();
			elipse.graphics.beginFill(0x00ff00);
			elipse.graphics.lineStyle(5,0xff0000);
			elipse.graphics.drawEllipse(300, 0, 200, 100);
			elipse.graphics.endFill();
			
			var cuadrado2:Shape = new Shape();
			cuadrado2.graphics.beginFill(0xff0000);
			cuadrado2.graphics.lineStyle(5, 0x00ff00);
			cuadrado2.graphics.drawRect(0, 275, 100, 100);
			cuadrado2.graphics.endFill();
			
			var jueves:Shape = new Shape();
			jueves.graphics.beginFill(0xff0000);
			jueves.graphics.lineStyle(5, 0x00ff00);
			jueves.graphics.drawRect(200, 137, 100, 100);
			jueves.graphics.endFill();
			
			var campoDeTexto:TextField = new TextField();
			campoDeTexto.textColor = 0x0000FF;
			campoDeTexto.text = "Spinner sin dedos";
			campoDeTexto.x = 150;
			
			addChild( cuadrado );
			addChild( circulo );
			addChild( elipse );
			addChild( cuadrado2 );
			addChild( jueves );
			addChild( campoDeTexto );
		}
	}
}