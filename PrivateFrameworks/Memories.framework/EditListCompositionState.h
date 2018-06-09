/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface EditListCompositionState : NSObject <NSCopying> {
    CompositionTrackGroup * m_alternateTrackGroup;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  m_audioCompTimeRange;
    int  m_audioEndOffset;
    int  m_audioStartOffset;
    KonaClip * m_clip;
    struct CGSize { 
        double width; 
        double height; 
    }  m_clipNaturalSize;
    bool  m_clipRequiresCA;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  m_clipTransform;
    int  m_clipType;
    float  m_clipVolume;
    CompositionTrackGroup * m_currentTrackGroup;
    KonaClip * m_nextClip;
    struct CGSize { 
        double width; 
        double height; 
    }  m_nextClipNaturalSize;
    bool  m_nextClipRequiresCA;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  m_nextClipTransform;
    int  m_nextClipType;
    float  m_nextClipVolume;
    KonaClip * m_previousClip;
    struct CGSize { 
        double width; 
        double height; 
    }  m_previousClipNaturalSize;
    bool  m_previousClipRequiresCA;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  m_previousClipTransform;
    int  m_previousClipType;
    float  m_previousClipVolume;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  m_videoCompTimeRange;
}

@property (nonatomic, retain) CompositionTrackGroup *alternateTrackGroup;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } audioCompTimeRange;
@property (nonatomic) int audioEndOffset;
@property (nonatomic) int audioStartOffset;
@property (nonatomic) KonaClip *clip;
@property (nonatomic) struct CGSize { double x1; double x2; } clipNaturalSize;
@property (nonatomic) bool clipRequiresCA;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } clipTransform;
@property (nonatomic, readonly) int clipType;
@property (nonatomic) float clipVolume;
@property (nonatomic, retain) CompositionTrackGroup *currentTrackGroup;
@property (nonatomic) KonaClip *nextClip;
@property (nonatomic) struct CGSize { double x1; double x2; } nextClipNaturalSize;
@property (nonatomic) bool nextClipRequiresCA;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } nextClipTransform;
@property (nonatomic, readonly) int nextClipType;
@property (nonatomic) float nextClipVolume;
@property (nonatomic) KonaClip *previousClip;
@property (nonatomic) struct CGSize { double x1; double x2; } previousClipNaturalSize;
@property (nonatomic) bool previousClipRequiresCA;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } previousClipTransform;
@property (nonatomic, readonly) int previousClipType;
@property (nonatomic) float previousClipVolume;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } videoCompTimeRange;

- (id)alternateTrackGroup;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })audioCompTimeRange;
- (int)audioEndOffset;
- (int)audioStartOffset;
- (id)clip;
- (struct CGSize { double x1; double x2; })clipNaturalSize;
- (bool)clipRequiresCA;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })clipTransform;
- (int)clipType;
- (float)clipVolume;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentTrackGroup;
- (void)dealloc;
- (id)nextClip;
- (struct CGSize { double x1; double x2; })nextClipNaturalSize;
- (bool)nextClipRequiresCA;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })nextClipTransform;
- (int)nextClipType;
- (float)nextClipVolume;
- (id)previousClip;
- (struct CGSize { double x1; double x2; })previousClipNaturalSize;
- (bool)previousClipRequiresCA;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })previousClipTransform;
- (int)previousClipType;
- (float)previousClipVolume;
- (void)setAlternateTrackGroup:(id)arg1;
- (void)setAudioCompTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setAudioEndOffset:(int)arg1;
- (void)setAudioStartOffset:(int)arg1;
- (void)setClip:(id)arg1;
- (void)setClipNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setClipRequiresCA:(bool)arg1;
- (void)setClipTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setClipVolume:(float)arg1;
- (void)setCurrentTrackGroup:(id)arg1;
- (void)setNextClip:(id)arg1;
- (void)setNextClipNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNextClipRequiresCA:(bool)arg1;
- (void)setNextClipTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setNextClipVolume:(float)arg1;
- (void)setPreviousClip:(id)arg1;
- (void)setPreviousClipNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreviousClipRequiresCA:(bool)arg1;
- (void)setPreviousClipTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPreviousClipVolume:(float)arg1;
- (void)setVideoCompTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)swapForTransition;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })videoCompTimeRange;

@end