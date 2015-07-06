/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface GKObserverTrampoline : NSObject {

	id _observee;
	NSString* _keyPath;
	/*^block*/id _block;
	int _cancellationPredicate;
	unsigned _options;

}

@property (readonly) id token; 
-(void)startObserving;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)token;
-(void)cancelObservation;
-(id)initObservingObject:(id)arg1 keyPath:(id)arg2 options:(unsigned)arg3 block:(/*^block*/id)arg4 ;
@end

