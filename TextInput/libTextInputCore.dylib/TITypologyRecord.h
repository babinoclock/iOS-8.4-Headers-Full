/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/NSCoding.h>

@interface TITypologyRecord : NSObject <NSCoding> {

	double _timestamp;

}

@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)textSummary;
-(void)applyToStatistic:(id)arg1 ;
-(id)textSummaryForAutocorrection:(id)arg1 ;
@end
