/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNSceneRenderer.h>
#import <SceneKit/SCNTechniqueSupport.h>

@protocol OS_dispatch_queue, SCNSceneRenderer;
@class SCNScene, SCNNode, SKScene, NSLock, NSObject, EAGLContext, UIColor, SCNTechnique, __SKSCNRenderer, NSString;

@interface SCNRenderer : NSObject <SCNSceneRenderer, SCNTechniqueSupport> {

	id _reserved;
	SCNScene* _scene;
	NSLock* _lock;
	NSObject*<OS_dispatch_queue> __renderingQueue;
	unsigned __antialiasingMode;
	SCD_Struct_SC23* _framebufferInfo;
	unsigned _shouldDeleteFramebuffer : 1;
	unsigned _pointOfViewWasSet : 1;
	unsigned _isPrivateRenderer : 1;
	unsigned _isViewPrivateRenderer : 1;
	double _currentSceneTime;
	double _currentSystemTime;
	double _deltaTime;
	double _forceSystemTime;
	double _lastSystemTime;
	double __nextFrameTime;
	char _playing;
	char _isAnimating;
	char _loops;
	id _delegate;
	_C3DEngineAdaptor* _engine;
	EAGLContext* _glContext;
	unsigned _jitteringEnabled : 1;
	unsigned _frozen : 1;
	unsigned _delegateSupportsWillRender : 1;
	unsigned _delegateSupportsDidRender : 1;
	unsigned _delegateSupportsDidApplyAnimations : 1;
	unsigned _delegateSupportsUpdate : 1;
	unsigned _delegateSupportsDidSimulatePhysics : 1;
	UIColor* _backgroundColor;
	C3DColor4 _c3dBackgroundColor;
	SCNNode* _pointOfView;
	SCNRenderer* _preloadRenderer;
	id<SCNSceneRenderer> _privateRendererOwner;
	SCNTechnique* _technique;
	__SKSCNRenderer* _overlay;
	id _overlayScene;
	char _disableOverlays;
	char _showStatistics;
	double _statisticsTimeStamp;
	void* _offscreenReserved;

}

@property (nonatomic,retain) SCNScene * scene; 
@property (nonatomic,readonly) double nextFrameTime; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double sceneTime; 
@property (assign,nonatomic) id<SCNSceneRendererDelegate> delegate; 
@property (getter=isPlaying) char playing; 
@property (assign,nonatomic) char loops; 
@property (nonatomic,retain) SCNNode * pointOfView; 
@property (assign,nonatomic) char autoenablesDefaultLighting; 
@property (assign,getter=isJitteringEnabled,nonatomic) char jitteringEnabled; 
@property (assign,nonatomic) char showsStatistics; 
@property (nonatomic,retain) SKScene * overlaySKScene; 
@property (nonatomic,readonly) void* context; 
@property (nonatomic,copy) SCNTechnique * technique; 
+(id)SCNJSExportProtocol;
+(id)rendererWithContext:(void*)arg1 options:(id)arg2 ;
-(SCNScene *)scene;
-(void)_jitterAtStep:(unsigned)arg1 updateMainFramebuffer:(char)arg2 redisplay:(char)arg3 jitterer:(id)arg4 ;
-(id)_authoringEnvironment;
-(void*)__CFObject;
-(void)setScene:(SCNScene *)arg1 ;
-(void)setTechnique:(SCNTechnique *)arg1 ;
-(SCNTechnique *)technique;
-(char)loops;
-(void)setLoops:(char)arg1 ;
-(C3DEngineContextRef)_engineContext;
-(id)hitTestWithSegmentFromPoint:(SCNVector3)arg1 toPoint:(SCNVector3)arg2 options:(id)arg3 ;
-(void)_attachTexture:(id)arg1 ;
-(void)_detachTexture:(id)arg1 ;
-(id)_initWithOptions:(id)arg1 isPrivateRenderer:(char)arg2 privateRendererOwner:(id)arg3 clearsOnDraw:(char)arg4 ;
-(SCNNode *)pointOfView;
-(double)sceneTime;
-(C3DColor4*)_backgroundColorComponents;
-(void)_invalidateFramebuffer;
-(float)_contentsScaleFactor;
-(void)_deleteFramebuffer;
-(void)_createFramebufferIfNeeded;
-(unsigned)_sampleCount;
-(SCNVector3)_projectPoint:(SCNVector3)arg1 viewport:(CGSize)arg2 ;
-(SCNVector3)_unprojectPoint:(SCNVector3)arg1 viewport:(CGSize)arg2 ;
-(_C3DRendererContext*)_rendererContext;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(id)_defaultPOVForScene:(id)arg1 ;
-(char)_installContext;
-(void)_bindFramebuffer;
-(char)_preloadResource:(id)arg1 abortHandler:(/*^block*/id)arg2 ;
-(char)prepareObject:(id)arg1 shouldAbortBlock:(/*^block*/id)arg2 ;
-(void)_updateEngineCallbacks;
-(void)_setSceneTime:(double)arg1 ;
-(void)render;
-(void)setSceneTime:(double)arg1 ;
-(void)updateCurrentTimeIfPlayingWithSystemTime:(double)arg1 ;
-(void)set_systemTime:(double)arg1 ;
-(void)_update:(C3DSceneRef)arg1 rendererContext:(_C3DRendererContext*)arg2 ;
-(void)_draw;
-(void)_installViewport;
-(char)isJitteringEnabled;
-(void)set_nextFrameTime:(double)arg1 ;
-(void)_clearBuffers;
-(void)_updatePointOfView;
-(double)_systemTime;
-(void)set_deltaTime:(double)arg1 ;
-(void)_renderAtTime:(double)arg1 ;
-(id)_hitTest:(CGPoint)arg1 viewport:(CGSize)arg2 options:(id)arg3 ;
-(char)_isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2 viewport:(CGSize)arg3 ;
-(void)_play;
-(void)_pause;
-(void)renderAtTime:(double)arg1 ;
-(double)nextFrameTime;
-(void)setCurrentTime:(double)arg1 ;
-(char)jitteringEnabled;
-(void)setJitteringEnabled:(char)arg1 ;
-(void)_resolveAndDiscard;
-(void)_unbindFramebuffer;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2 ;
-(char)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2 ;
-(SCNVector3)projectPoint:(SCNVector3)arg1 ;
-(SCNVector3)unprojectPoint:(SCNVector3)arg1 ;
-(void)prepareObjects:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)autoenablesDefaultLighting;
-(void)setAutoenablesDefaultLighting:(char)arg1 ;
-(char)showsStatistics;
-(void)setShowsStatistics:(char)arg1 ;
-(SKScene *)overlaySKScene;
-(void)setOverlaySKScene:(SKScene *)arg1 ;
-(void)setupForDeprecatedOffscreenRenderer;
-(void)_setBackingSize:(CGSize)arg1 ;
-(unsigned)_antialiasingMode;
-(void)set_antialiasingMode:(unsigned)arg1 ;
-(void)_projectPoints:(SCNVector3*)arg1 count:(unsigned)arg2 viewport:(CGSize)arg3 ;
-(void)_didRenderScene:(id)arg1 ;
-(void)_willRenderScene:(id)arg1 ;
-(void)setAutoAdjustCamera:(char)arg1 ;
-(char)autoAdjustCamera;
-(void)setScene:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)disableOverlays;
-(void)setDisableOverlays:(char)arg1 ;
-(id)programWithNode:(id)arg1 withMaterial:(id)arg2 ;
-(double)_nextFrameTime;
-(char)_needsRepetitiveRedraw;
-(void)_updateWithSystemTime:(double)arg1 ;
-(void)_drawWithJitteringPresentationMode;
-(UIImage*)_snapshotWithImageSize:(CGSize)arg1 backingSize:(CGSize)arg2 ;
-(char)frozen;
-(void)_displayLinkStatsTick;
-(void)_displayLinkStatsTack;
-(void)_presentFramebuffer;
-(char)_showsAuthoringEnvironment;
-(void)set_showsAuthoringEnvironment:(char)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id<SCNSceneRendererDelegate>)arg1 ;
-(id)init;
-(NSString *)description;
-(id<SCNSceneRendererDelegate>)delegate;
-(void)lock;
-(void)unlock;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(void)setFrozen:(char)arg1 ;
-(void)_stop;
-(id)_renderingQueue;
-(double)currentTime;
-(char)isPlaying;
-(void)setPlaying:(char)arg1 ;
@end

