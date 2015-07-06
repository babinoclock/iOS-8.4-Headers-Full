/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKit/NSSecureCoding.h>

@class NSString;

@interface HMHAPMetadataUnit : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _unitDescription;
	NSString* _localizedDescription;

}

@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * unitDescription;                   //@synthesize unitDescription=_unitDescription - In the implementation block
@property (nonatomic,retain) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)localizedDescription;
-(NSString *)unitDescription;
-(void)setUnitDescription:(NSString *)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
@end

