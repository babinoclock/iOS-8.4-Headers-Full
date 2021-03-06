/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@class WebScriptObjectPrivate;

@interface WebScriptObject : NSObject {

	WebScriptObjectPrivate* _private;

}
+(void)initialize;
+(id)_convertValueToObjcValue:(JSValue)arg1 originRootObject:(RootObject*)arg2 rootObject:(RootObject*)arg3 ;
+(id)scriptObjectForJSObject:(OpaqueJSValueRef)arg1 originRootObject:(RootObject*)arg2 rootObject:(RootObject*)arg3 ;
+(char)throwException:(id)arg1 ;
-(id)copyArrayOrDictionaryWithContext:(OpaqueJSContextRef)arg1 ;
-(id)copyJSONDataWithContext:(OpaqueJSContextRef)arg1 ;
-(id)safeValueForKey:(id)arg1 ;
-(id)copyArrayValueWithValidator:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)copyValuesForKeys:(id)arg1 ;
-(id)safeCallWebScriptMethod:(id)arg1 withArguments:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)objectAtIndex:(unsigned)arg1 ;
-(id)_init;
-(oneway void)release;
-(RootObject*)_rootObject;
-(void)finalize;
-(void)_setImp:(JSObject*)arg1 originRootObject:(PassRefPtr<JSC::Bindings::RootObject>*)arg2 rootObject:(PassRefPtr<JSC::Bindings::RootObject>*)arg3 ;
-(void)_initializeScriptDOMNodeImp;
-(char)_hasImp;
-(JSObject*)_imp;
-(void)_setOriginRootObject:(PassRefPtr<JSC::Bindings::RootObject>*)arg1 andRootObject:(PassRefPtr<JSC::Bindings::RootObject>*)arg2 ;
-(id)_initWithJSObject:(JSObject*)arg1 originRootObject:(PassRefPtr<JSC::Bindings::RootObject>*)arg2 rootObject:(PassRefPtr<JSC::Bindings::RootObject>*)arg3 ;
-(char)_isSafeScript;
-(RootObject*)_originRootObject;
-(OpaqueJSValueRef)JSObject;
-(OpaqueJSContextRef)_globalContextRef;
-(id)callWebScriptMethod:(id)arg1 withArguments:(id)arg2 ;
-(id)evaluateWebScript:(id)arg1 ;
-(void)removeWebScriptKey:(id)arg1 ;
-(char)hasWebScriptKey:(id)arg1 ;
-(id)stringRepresentation;
-(id)webScriptValueAtIndex:(unsigned)arg1 ;
-(void)setWebScriptValueAtIndex:(unsigned)arg1 value:(id)arg2 ;
-(void)setException:(id)arg1 ;
-(id)JSValue;
@end

