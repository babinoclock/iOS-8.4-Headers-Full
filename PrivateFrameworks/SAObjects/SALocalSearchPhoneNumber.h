/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SALocalSearchPhoneNumber : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * type; 
@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)phoneNumber;
+(id)phoneNumberWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)encodedClassName;
@end

