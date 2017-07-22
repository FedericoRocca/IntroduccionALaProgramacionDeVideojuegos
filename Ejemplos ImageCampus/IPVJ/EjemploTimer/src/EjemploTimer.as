package
{
	import flash.display.Sprite;
	import flash.events.TimerEvent;
	import flash.utils.Timer;
	
	public class EjemploTimer extends Sprite
	{
		
		public var contador:Timer = new flash.utils.Timer(1000, 5);
		
		public function EjemploTimer()
		{
			contador.addEventListener(TimerEvent.TIMER, OnTimer);
			contador.addEventListener(TimerEvent.TIMER_COMPLETE, OnTimerComplete);
			
			contador.start();
		}
		
		protected function OnTimerComplete(event:TimerEvent):void
		{
			trace("OnTimerComplete");
		}
		
		protected function OnTimer(event:TimerEvent):void
		{
			trace("OnTimer");
		}
		
	}
}