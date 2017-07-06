package
{
	public class Personaje
	{
		
		private var vida:int;
		
		public function Personaje()
		{
			vida = 0;
		}
		
		public function atacar():void
		{
			trace("Te ataco, BIATCH");
		}
		
		public function setVida(v:int):void
		{
			vida = v;
		}
		
	}
}