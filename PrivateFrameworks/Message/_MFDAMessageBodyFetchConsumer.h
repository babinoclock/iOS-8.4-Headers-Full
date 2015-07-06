/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFRequestQueueResponseConsumer.h>
#import <Message/DAMailAccountStreamConsumerFactory.h>

@protocol MFDAStreamingContentConsumer;
@class MFError, NSData, NSString;

@interface _MFDAMessageBodyFetchConsumer : NSObject <MFRequestQueueResponseConsumer, DAMailAccountStreamConsumerFactory> {

	id<MFDAStreamingContentConsumer> _streamConsumer;
	char _succeeded;
	MFError* _error;
	NSData* _data;

}

@property (nonatomic,retain) id<MFDAStreamingContentConsumer> streamConsumer;              //@synthesize streamConsumer=_streamConsumer - In the implementation block
@property (nonatomic,readonly) char succeeded;                                             //@synthesize succeeded=_succeeded - In the implementation block
@property (nonatomic,retain) MFError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSData * data;                                                //@synthesize data=_data - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)succeeded;
-(void)dealloc;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(MFError *)error;
-(void)setStreamConsumer:(id<MFDAStreamingContentConsumer>)arg1 ;
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
-(id<MFDAStreamingContentConsumer>)streamConsumer;
-(id)streamingContentConsumer;
-(char)wantsData;
-(void)setError:(MFError *)arg1 ;
@end

