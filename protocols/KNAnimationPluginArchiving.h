/* made by EzioChiu.
 */

@protocol KNAnimationPluginArchiving <NSObject>

@required

+ (void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(long long)arg4 isToClassic:(bool)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id*)arg1 animationName:(NSString *)arg2 warning:(id*)arg3 type:(long long)arg4 isFromClassic:(bool)arg5 version:(unsigned long long)arg6;

@end
