/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <BulletinBoard/BBUniquableObject.h>
#import <BulletinBoard/NSCopying.h>
#import <BulletinBoard/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface BBSound : NSObject <BBUniquableObject, NSCopying, NSSecureCoding> {

	int _soundType;
	unsigned long _systemSoundID;
	unsigned _soundBehavior;
	NSString* _audioCategory;
	NSString* _ringtoneName;
	char _repeats;
	NSDictionary* _vibrationPattern;
	int _alertType;
	NSString* _accountIdentifier;
	NSString* _toneIdentifier;
	NSString* _vibrationIdentifier;
	double _maxDuration;
	NSString* _songPath;

}

@property (assign,nonatomic) int soundType;                                //@synthesize soundType=_soundType - In the implementation block
@property (assign,nonatomic) unsigned long systemSoundID;                  //@synthesize systemSoundID=_systemSoundID - In the implementation block
@property (assign,nonatomic) unsigned soundBehavior;                       //@synthesize soundBehavior=_soundBehavior - In the implementation block
@property (nonatomic,copy) NSString * ringtoneName;                        //@synthesize ringtoneName=_ringtoneName - In the implementation block
@property (assign,getter=isRepeating,nonatomic) char repeats;              //@synthesize repeats=_repeats - In the implementation block
@property (nonatomic,copy) NSDictionary * vibrationPattern;                //@synthesize vibrationPattern=_vibrationPattern - In the implementation block
@property (nonatomic,copy) NSString * audioCategory;                       //@synthesize audioCategory=_audioCategory - In the implementation block
@property (assign,nonatomic) double maxDuration;                           //@synthesize maxDuration=_maxDuration - In the implementation block
@property (assign,nonatomic) int alertType;                                //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                   //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * toneIdentifier;                      //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
@property (nonatomic,copy) NSString * vibrationIdentifier;                 //@synthesize vibrationIdentifier=_vibrationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * songPath;                            //@synthesize songPath=_songPath - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)_possiblyCachedAlertSoundForInitializedSound:(id)arg1 ;
+(void)_removeCachedSound:(id)arg1 ;
+(id)alertSoundWithSystemSoundID:(unsigned long)arg1 ;
+(id)alertSoundWithSystemSoundPath:(id)arg1 ;
-(NSDictionary *)vibrationPattern;
-(void)setVibrationPattern:(NSDictionary *)arg1 ;
-(double)maxDuration;
-(void)setMaxDuration:(double)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)uniqueIdentifier;
-(void)setSoundType:(int)arg1 ;
-(int)soundType;
-(id)initWithSystemSoundID:(unsigned long)arg1 behavior:(unsigned)arg2 ;
-(id)initWithSystemSoundPath:(id)arg1 behavior:(unsigned)arg2 ;
-(id)initWithSystemSoundID:(unsigned long)arg1 behavior:(unsigned)arg2 vibrationPattern:(id)arg3 ;
-(id)initWithSystemSoundID:(unsigned long)arg1 soundPath:(id)arg2 behavior:(unsigned)arg3 vibrationPattern:(id)arg4 ;
-(id)initWithSystemSoundPath:(id)arg1 behavior:(unsigned)arg2 vibrationPattern:(id)arg3 ;
-(void)setSongPath:(NSString *)arg1 ;
-(void)setSystemSoundID:(unsigned long)arg1 ;
-(void)setSoundBehavior:(unsigned)arg1 ;
-(id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(char)arg3 audioCategory:(id)arg4 ;
-(id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(char)arg3 audioCategory:(id)arg4 maxDuration:(double)arg5 ;
-(void)setRingtoneName:(NSString *)arg1 ;
-(void)setAudioCategory:(NSString *)arg1 ;
-(id)initWithToneAlert:(int)arg1 accountIdentifier:(id)arg2 ;
-(void)setToneIdentifier:(NSString *)arg1 ;
-(void)setVibrationIdentifier:(NSString *)arg1 ;
-(id)initWithSong:(id)arg1 vibrationPattern:(id)arg2 repeats:(char)arg3 maxDuration:(double)arg4 ;
-(id)initWithSong:(id)arg1 vibrationPattern:(id)arg2 repeats:(char)arg3 audioCategory:(id)arg4 maxDuration:(double)arg5 ;
-(unsigned long)systemSoundID;
-(NSString *)songPath;
-(unsigned)soundBehavior;
-(NSString *)ringtoneName;
-(char)isRepeating;
-(NSString *)audioCategory;
-(NSString *)toneIdentifier;
-(NSString *)vibrationIdentifier;
-(id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(char)arg3 ;
-(id)initWithToneAlert:(int)arg1 ;
-(id)initWithToneAlert:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 ;
-(id)initWithSong:(id)arg1 vibrationPattern:(id)arg2 ;
-(NSString *)accountIdentifier;
-(void)setAlertType:(int)arg1 ;
-(int)alertType;
-(void)setRepeats:(char)arg1 ;
@end

