/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _AXAssertionServer : NSObject {

	/*^block*/id _assertionWasAcquiredHandler;
	/*^block*/id _assertionWasReleasedHandler;
	NSMutableDictionary* _healdAssertionMap;

}

@property (nonatomic,copy) id assertionWasAcquiredHandler;                         //@synthesize assertionWasAcquiredHandler=_assertionWasAcquiredHandler - In the implementation block
@property (nonatomic,copy) id assertionWasReleasedHandler;                         //@synthesize assertionWasReleasedHandler=_assertionWasReleasedHandler - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * healdAssertionMap;              //@synthesize healdAssertionMap=_healdAssertionMap - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setHealdAssertionMap:(NSMutableDictionary *)arg1 ;
-(void)setAssertionWasAcquiredHandler:(id)arg1 ;
-(void)setAssertionWasReleasedHandler:(id)arg1 ;
-(NSMutableDictionary *)healdAssertionMap;
-(id)assertionWasAcquiredHandler;
-(id)assertionWasReleasedHandler;
-(void)addHeldAssertionOfType:(id)arg1 byClient:(id)arg2 ;
-(void)removeHeldAssertionOfType:(id)arg1 byClient:(id)arg2 ;
@end

