/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class UIImage;

@interface MPArtworkRepresentation : NSObject {

	UIImage* _image;
	id _representationToken;
	CGSize _representationSize;

}

@property (nonatomic,retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize representationSize;              //@synthesize representationSize=_representationSize - In the implementation block
@property (nonatomic,retain) id representationToken;                 //@synthesize representationToken=_representationToken - In the implementation block
+(id)representationWithSize:(CGSize)arg1 image:(id)arg2 ;
-(CGSize)representationSize;
-(id)representationToken;
-(void)setRepresentationToken:(id)arg1 ;
-(void)setRepresentationSize:(CGSize)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(id)debugQuickLookObject;
@end

