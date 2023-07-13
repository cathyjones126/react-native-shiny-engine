#import <React/RCTBridgeDelegate.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNShinyEngine : UIResponder<RCTBridgeDelegate>

+ (instancetype)shared;
- (UIViewController *)changeRootController:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end

NS_ASSUME_NONNULL_END
