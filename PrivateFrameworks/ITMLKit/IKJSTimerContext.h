/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer, JSManagedValue, IKJSManagedArray;

@interface IKJSTimerContext : NSObject {

	char _isRepeating;
	NSTimer* _timer;
	id _ownerObject;
	JSManagedValue* _managedCallback;
	IKJSManagedArray* _managedArgs;

}

@property (nonatomic,retain) NSTimer * timer;                                        //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain,readonly) id ownerObject;                                //@synthesize ownerObject=_ownerObject - In the implementation block
@property (nonatomic,retain,readonly) JSManagedValue * managedCallback;              //@synthesize managedCallback=_managedCallback - In the implementation block
@property (nonatomic,retain,readonly) IKJSManagedArray * managedArgs;                //@synthesize managedArgs=_managedArgs - In the implementation block
@property (nonatomic,readonly) char isRepeating;                                     //@synthesize isRepeating=_isRepeating - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(char)isRepeating;
-(id)ownerObject;
-(void)removeManagedReferences;
-(id)initWithCallback:(id)arg1 callbackArgs:(id)arg2 repeating:(char)arg3 ownerObject:(id)arg4 timer:(id)arg5 ;
-(JSManagedValue *)managedCallback;
-(IKJSManagedArray *)managedArgs;
@end

