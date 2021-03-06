/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, PRSImage;


@protocol PRSRowSection <PRSSection>
@property (nonatomic,retain) NSString * key; 
@property (assign,nonatomic) char key_nowrap; 
@property (assign,nonatomic) int key_weight; 
@property (nonatomic,retain) NSString * value; 
@property (assign,nonatomic) char value_nowrap; 
@property (assign,nonatomic) int value_weight; 
@property (nonatomic,retain) PRSImage * value_image; 
@optional
-(NSString *)value;
-(void)setValue:(id)arg1;
-(char)key_nowrap;
-(void)setKey_nowrap:(char)arg1;
-(int)key_weight;
-(void)setKey_weight:(int)arg1;
-(char)value_nowrap;
-(void)setValue_nowrap:(char)arg1;
-(int)value_weight;
-(void)setValue_weight:(int)arg1;
-(PRSImage *)value_image;
-(void)setValue_image:(id)arg1;

@required
-(NSString *)key;
-(void)setKey:(id)arg1;

@end

