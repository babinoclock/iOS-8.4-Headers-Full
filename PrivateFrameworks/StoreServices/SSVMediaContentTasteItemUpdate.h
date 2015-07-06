/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSXPCCoding.h>
#import <StoreServices/NSSecureCoding.h>

@class SSVMediaContentTasteItem, NSDate, NSString;

@interface SSVMediaContentTasteItemUpdate : NSObject <SSXPCCoding, NSSecureCoding> {

	SSVMediaContentTasteItem* _item;
	NSDate* _updateDate;

}

@property (nonatomic,copy) SSVMediaContentTasteItem * item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSDate * updateDate;                          //@synthesize updateDate=_updateDate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SSVMediaContentTasteItem *)item;
-(void)setItem:(SSVMediaContentTasteItem *)arg1 ;
-(NSDate *)updateDate;
-(void)setUpdateDate:(NSDate *)arg1 ;
@end

