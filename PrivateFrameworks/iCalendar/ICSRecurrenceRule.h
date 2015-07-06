/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/NSCoding.h>
#import <iCalendar/ICSWriting.h>

@class NSMutableDictionary, ICSDateValue, NSNumber, NSArray;

@interface ICSRecurrenceRule : NSObject <NSCoding, ICSWriting> {

	int _freq;
	NSMutableDictionary* _parameters;

}

@property (assign,nonatomic) int freq; 
@property (nonatomic,retain) ICSDateValue * until; 
@property (assign,nonatomic) NSNumber * count; 
@property (assign,nonatomic) NSNumber * interval; 
@property (nonatomic,retain) NSArray * bysecond; 
@property (nonatomic,retain) NSArray * byminute; 
@property (nonatomic,retain) NSArray * byhour; 
@property (nonatomic,retain) NSArray * byday; 
@property (nonatomic,retain) NSArray * bymonthday; 
@property (nonatomic,retain) NSArray * byyearday; 
@property (nonatomic,retain) NSArray * byweekno; 
@property (nonatomic,retain) NSArray * bymonth; 
@property (nonatomic,retain) NSArray * bysetpos; 
@property (assign,nonatomic) NSNumber * wkst; 
+(id)recurrenceRuleFromICSCString:(const char*)arg1 withTokenizer:(id)arg2 ;
+(id)recurrenceRuleFromICSString:(id)arg1 ;
-(id)initWithFrequency:(int)arg1 ;
-(void)setWkst:(NSNumber *)arg1 ;
-(void)setUntil:(ICSDateValue *)arg1 ;
-(void)setByday:(NSArray *)arg1 ;
-(void)setBymonth:(NSArray *)arg1 ;
-(void)setBymonthday:(NSArray *)arg1 ;
-(void)setByweekno:(NSArray *)arg1 ;
-(void)setByyearday:(NSArray *)arg1 ;
-(void)setBysetpos:(NSArray *)arg1 ;
-(int)freq;
-(NSNumber *)wkst;
-(ICSDateValue *)until;
-(NSArray *)byday;
-(NSArray *)bymonth;
-(NSArray *)bymonthday;
-(NSArray *)byweekno;
-(NSArray *)byyearday;
-(NSArray *)bysetpos;
-(id)parameterValueForName:(id)arg1 ;
-(void)setParameterValue:(id)arg1 forName:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)count;
-(void)setCount:(NSNumber *)arg1 ;
-(void)setInterval:(NSNumber *)arg1 ;
-(NSNumber *)interval;
-(id)ICSStringWithOptions:(unsigned)arg1 ;
-(id)propertiesToIncludeForChecksumVersion:(int)arg1 ;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1 ;
-(id)propertiesToObscure;
-(void)ICSStringWithOptions:(unsigned)arg1 appendingToString:(id)arg2 ;
-(id)parametersToIncludeForChecksumVersion:(int)arg1 ;
-(id)parametersToObscure;
-(char)shouldObscureValue;
-(void)removeParameterValueForName:(id)arg1 ;
-(void)_ICSStringWithOptions:(unsigned)arg1 appendingToString:(id)arg2 ;
-(NSArray *)byhour;
-(NSArray *)byminute;
-(NSArray *)bysecond;
-(void)cleanUpForStartDate:(id)arg1 ;
-(id)occurrencesForStartDate:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 inTimeZone:(id)arg4 ;
-(void)setFreq:(int)arg1 ;
-(void)setBysecond:(NSArray *)arg1 ;
-(void)setByminute:(NSArray *)arg1 ;
-(void)setByhour:(NSArray *)arg1 ;
@end

