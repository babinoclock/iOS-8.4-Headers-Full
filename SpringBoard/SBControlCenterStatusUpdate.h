/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:58 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface SBControlCenterStatusUpdate : NSObject {

	NSString* _reason;
	NSArray* _statusStrings;
	int _type;

}

@property (nonatomic,copy) NSString * reason;                    //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSArray * statusStrings;              //@synthesize statusStrings=_statusStrings - In the implementation block
@property (assign,nonatomic) int type;                           //@synthesize type=_type - In the implementation block
+(id)statusUpdateWithString:(id)arg1 reason:(id)arg2 ;
-(void)addStatusString:(id)arg1 ;
-(NSArray *)statusStrings;
-(id)popStatusString;
-(void)setStatusStrings:(NSArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
@end

