/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIAppearance.h>

@class NSDictionary;

@interface _UIPropertyBasedAppearance : _UIAppearance {

	NSDictionary* _propertiesToMatch;

}

@property (setter=_setPropertiesToMatch:,nonatomic,retain) NSDictionary * _propertiesToMatch;              //@synthesize propertiesToMatch=_propertiesToMatch - In the implementation block
+(id)_appearanceMatchingProperties:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3 ;
+(id)_appearanceObjectKeyForProperties:(id)arg1 ;
-(void)dealloc;
-(char)_isValidAppearanceForCustomizableObject:(id)arg1 ;
-(NSDictionary *)_propertiesToMatch;
-(void)_setPropertiesToMatch:(id)arg1 ;
@end

