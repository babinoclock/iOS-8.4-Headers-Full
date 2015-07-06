/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/NSCoding.h>

@class NSString, NSMutableArray;

@interface CKTimeLoggerLog : NSObject <NSCoding> {

	NSString* _type;
	NSString* _beginningMessage;
	NSString* _endingMessage;
	NSMutableArray* _pauseRecords;
	double _beginTime;
	double _endTime;

}

@property (nonatomic,retain) NSString * type;                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double beginTime;                           //@synthesize beginTime=_beginTime - In the implementation block
@property (assign,nonatomic) double endTime;                             //@synthesize endTime=_endTime - In the implementation block
@property (readonly) double elapsedTime; 
@property (nonatomic,retain) NSString * beginningMessage;                //@synthesize beginningMessage=_beginningMessage - In the implementation block
@property (nonatomic,retain) NSString * endingMessage;                   //@synthesize endingMessage=_endingMessage - In the implementation block
@property (nonatomic,retain) NSMutableArray * pauseRecords;              //@synthesize pauseRecords=_pauseRecords - In the implementation block
-(void)setBeginningMessage:(NSString *)arg1 ;
-(void)setEndingMessage:(NSString *)arg1 ;
-(void)togglePauseWithTime:(double)arg1 message:(id)arg2 ;
-(void)appendStatusReportToString:(id)arg1 withIndent:(unsigned)arg2 showingPointers:(char)arg3 ;
-(void)setPauseRecords:(NSMutableArray *)arg1 ;
-(NSString *)beginningMessage;
-(NSString *)endingMessage;
-(NSMutableArray *)pauseRecords;
-(void)setEndTime:(double)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setBeginTime:(double)arg1 ;
-(double)beginTime;
-(double)elapsedTime;
-(double)endTime;
@end

