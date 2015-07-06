/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSStructuredLocation : ICSProperty

@property (nonatomic,retain) NSString * fmtype; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * loctype; 
@property (nonatomic,retain) NSString * abURLString; 
@property (assign,nonatomic) double radius; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * address; 
@property (nonatomic,retain) NSString * routing; 
-(NSString *)routing;
-(NSString *)fmtype;
-(void)setFmtype:(NSString *)arg1 ;
-(void)setRouting:(NSString *)arg1 ;
-(NSString *)address;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)displayName;
-(NSString *)abURLString;
-(void)setAbURLString:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(id)propertiesToObscure;
-(id)parametersToObscure;
-(char)shouldObscureValue;
-(void)_ICSStringWithOptions:(unsigned)arg1 appendingToString:(id)arg2 ;
-(NSString *)loctype;
-(void)setLoctype:(NSString *)arg1 ;
@end

