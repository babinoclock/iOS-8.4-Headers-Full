/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLCloudScenarioConsumer;
@class NSArray;

@interface PLCloudScenarioProducer : NSObject {

	NSArray* _triggers;
	id<PLCloudScenarioConsumer> _consumer;

}

@property (nonatomic,retain) NSArray * triggers;                                //@synthesize triggers=_triggers - In the implementation block
@property (nonatomic,retain) id<PLCloudScenarioConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
-(void)dealloc;
-(void)activate;
-(NSArray *)triggers;
-(void)subscribeToTriggerType:(unsigned)arg1 withSelector:(SEL)arg2 ;
-(void)unsubscribeFromTriggerType:(unsigned)arg1 ;
-(void)setTriggers:(NSArray *)arg1 ;
-(id<PLCloudScenarioConsumer>)consumer;
-(void)setConsumer:(id<PLCloudScenarioConsumer>)arg1 ;
@end

