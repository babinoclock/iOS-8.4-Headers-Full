/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSIndexPath;

@interface MPPlayableContentCallbackContext : NSObject {

	char _serviced;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) char serviced;                          //@synthesize serviced=_serviced - In the implementation block
-(char)serviced;
-(void)setServiced:(char)arg1 ;
-(id)initWithIndexPath:(id)arg1 ;
-(NSIndexPath *)indexPath;
@end
