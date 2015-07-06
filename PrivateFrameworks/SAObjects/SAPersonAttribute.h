/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAPerson;

@interface SAPersonAttribute : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * data; 
@property (nonatomic,copy) NSString * displayText; 
@property (nonatomic,retain) SAPerson * object; 
@property (nonatomic,retain) id<SAAceSerializable> typedData; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)personAttribute;
+(id)personAttributeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_contactAddressValue;
-(NSString *)displayText;
-(id)groupIdentifier;
-(NSString *)data;
-(void)setData:(NSString *)arg1 ;
-(SAPerson *)object;
-(void)setObject:(SAPerson *)arg1 ;
-(void)setDisplayText:(NSString *)arg1 ;
-(id)encodedClassName;
-(id<SAAceSerializable>)typedData;
-(void)setTypedData:(id<SAAceSerializable>)arg1 ;
@end
