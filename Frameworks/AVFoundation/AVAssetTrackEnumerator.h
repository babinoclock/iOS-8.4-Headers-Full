/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSString, NSArray, NSEnumerator;

@interface AVAssetTrackEnumerator : NSEnumerator {

	NSString* _mediaType;
	NSArray* _mediaCharacteristics;
	NSEnumerator* _enumerator;

}
+(id)trackEnumeratorWithAsset:(id)arg1 ;
-(id)initWithAsset:(id)arg1 mediaType:(id)arg2 ;
-(id)initWithAsset:(id)arg1 mediaCharacteristics:(id)arg2 ;
-(void)setMediaCharacteristics:(id)arg1 ;
-(void)dealloc;
-(id)nextObject;
-(id)initWithAsset:(id)arg1 ;
-(void)setMediaType:(id)arg1 ;
@end

