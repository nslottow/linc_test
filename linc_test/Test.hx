package linc_test;

@:keep
@:include('linc_test.h')
@:allow(SDL_helper)
#if !display
@:build(linc.Linc.touch())
@:build(linc.Linc.xml('test'))
#end
extern class Test {
	@:native('linc::test::say_hello')
	static function say_hello():Void;
}