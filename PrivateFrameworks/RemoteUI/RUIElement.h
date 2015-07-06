/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <RemoteUI/RemoteUI-Structs.h>
@class NSDictionary, NSString;

@interface RUIElement : NSObject {

	NSDictionary* _attributes;
	char _enabled;

}

@property (nonatomic,retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (assign,nonatomic) char enabled;                           //@synthesize enabled=_enabled - In the implementation block
-(id)sourceURL;
-(void)setImageAlignment:(int)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)init;
-(NSString *)name;
-(void)setEnabled:(char)arg1 ;
-(char)enabled;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(char)loadImage;
-(id)subElementsWithName:(id)arg1 ;
-(id)URLAttributeForImageName:(id)arg1 getScale:(float*)arg2 ;
-(void)imageLoaded:(id)arg1 ;
-(int)_horizontalAlignmentForString:(id)arg1 ;
@end
