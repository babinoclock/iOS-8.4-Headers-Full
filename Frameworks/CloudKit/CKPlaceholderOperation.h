/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_group;
@class NSObject, NSString, NSDate;

@interface CKPlaceholderOperation : NSOperation {

	NSObject*<OS_dispatch_group> _group;
	char _isFinished;
	char _isExecuting;
	NSString* _sectionID;
	id _context;
	NSDate* _startDate;
	NSString* _operationID;
	/*^block*/id _daemonInvokeBlock;

}

@property (nonatomic,retain) NSString * sectionID;                  //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) id context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSString * operationID;              //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,readonly) id daemonInvokeBlock;                //@synthesize daemonInvokeBlock=_daemonInvokeBlock - In the implementation block
@property (assign,nonatomic) char isExecuting;                      //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) char isFinished;                       //@synthesize isFinished=_isFinished - In the implementation block
-(id)initWithOperation:(id)arg1 daemonInvocationBlock:(/*^block*/id)arg2 ;
-(void)setSectionID:(NSString *)arg1 ;
-(id)daemonInvokeBlock;
-(void)cancel;
-(id)description;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)start;
-(void)main;
-(char)isFinished;
-(char)isExecuting;
-(NSString *)operationID;
-(char)isConcurrent;
-(NSString *)sectionID;
-(id)CKPropertiesDescription;
-(void)setIsFinished:(char)arg1 ;
-(void)setIsExecuting:(char)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
@end

