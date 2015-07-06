/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <BulletinBoard/BBUniquableObject.h>
#import <BulletinBoard/NSSecureCoding.h>
#import <BulletinBoard/NSCopying.h>

@class NSString, BBColor, BBImage;

@interface BBAppearance : NSObject <BBUniquableObject, NSSecureCoding, NSCopying> {

	NSString* _title;
	BBColor* _titleColor;
	BBImage* _image;
	BBColor* _color;
	int _style;
	NSString* _viewClassName;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) BBColor * titleColor;                    //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy) BBImage * image;                         //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) BBColor * color;                         //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) int style;                             //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * viewClassName;                //@synthesize viewClassName=_viewClassName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)appearanceWithTitle:(id)arg1 ;
-(void)dealloc;
-(void)setImage:(BBImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BBImage *)image;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(BBColor *)color;
-(void)setColor:(BBColor *)arg1 ;
-(id)uniqueIdentifier;
-(BBColor *)titleColor;
-(void)setTitleColor:(BBColor *)arg1 ;
-(NSString *)viewClassName;
-(void)setViewClassName:(NSString *)arg1 ;
@end

