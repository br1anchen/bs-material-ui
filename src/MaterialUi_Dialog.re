
            

                [@bs.deriving jsConverter]
                type maxWidth = [
                    | [@bs.as "xs"] `Xs
| [@bs.as "sm"] `Sm
| [@bs.as "md"] `Md
| [@bs.as "false"] `False
                ];

                    module TransitionDuration_shape {
                        [@bs.deriving abstract]
                        type t = {
                            
                                [@bs.optional]
                                
                                enter: [ | `Int(int) | `Float(float) ]
                            ,
                                [@bs.optional]
                                
                                exit: [ | `Int(int) | `Float(float) ]
                            
                        };
                        let make = t;

                        let unwrap = (obj: t) => {
                            
                                let unwrappedMap = Js.Dict.empty();
                                
                                    switch (obj |. enterGet |. Belt.Option.map((v) => MaterialUi_Helpers.unwrapValue(v))) {
                                        | Some(v) =>
                                            unwrappedMap
                                                |. Js.Dict.set(
                                                    "enter",
                                                    v
                                                    |. MaterialUi_Helpers.toJsUnsafe
                                                );
                                        | None => ()    
                                    };
                                
                                    switch (obj |. exitGet |. Belt.Option.map((v) => MaterialUi_Helpers.unwrapValue(v))) {
                                        | Some(v) =>
                                            unwrappedMap
                                                |. Js.Dict.set(
                                                    "exit",
                                                    v
                                                    |. MaterialUi_Helpers.toJsUnsafe
                                                );
                                        | None => ()    
                                    };
                                
                                unwrappedMap;
                            
                            
                        };
                    };
                

                module Classes = {
                    type classesType = | Root(string)
| Paper(string)
| PaperWidthXs(string)
| PaperWidthSm(string)
| PaperWidthMd(string)
| PaperFullWidth(string)
| PaperFullScreen(string);
                    type t = list(classesType);
                    let to_string =
                        fun
                        | Root(_) => "root"
| Paper(_) => "paper"
| PaperWidthXs(_) => "paperWidthXs"
| PaperWidthSm(_) => "paperWidthSm"
| PaperWidthMd(_) => "paperWidthMd"
| PaperFullWidth(_) => "paperFullWidth"
| PaperFullScreen(_) => "paperFullScreen";
                    let to_obj = (listOfClasses) =>
                    listOfClasses |. Belt.List.reduce(
                        Js.Dict.empty(),
                        (obj, classType) => {
                            switch classType {
                                | Root(className)
| Paper(className)
| PaperWidthXs(className)
| PaperWidthSm(className)
| PaperWidthMd(className)
| PaperFullWidth(className)
| PaperFullScreen(className) => Js.Dict.set(obj, to_string(classType), className)
                            };
                            obj
                        },
                    );
                };
            
            [@bs.obj] external makeProps : (~_BackdropProps: Js.t({..})=?,
~className: string=?,
~disableBackdropClick: bool=?,
~disableEscapeKeyDown: bool=?,
~fullScreen: bool=?,
~fullWidth: bool=?,
~maxWidth: string=?,
~onBackdropClick: ReactEvent.Mouse.t => unit=?,
~onClose: 'any_rr9c=?,
~onEnter: ReactEvent.Synthetic.t => unit=?,
~onEntered: ReactEvent.Synthetic.t => unit=?,
~onEntering: ReactEvent.Synthetic.t => unit=?,
~onEscapeKeyDown: ReactEvent.Keyboard.t => unit=?,
~onExit: ReactEvent.Synthetic.t => unit=?,
~onExited: ReactEvent.Synthetic.t => unit=?,
~onExiting: ReactEvent.Synthetic.t => unit=?,
~_open: bool,
~_PaperProps: Js.t({..})=?,
~_TransitionComponent: 'union_rq9y=?,
~transitionDuration: 'union_rkh3=?,
~_TransitionProps: Js.t({..})=?,
~_BackdropComponent: 'union_r755=?,
~container: 'union_rmje=?,
~disableAutoFocus: bool=?,
~disableEnforceFocus: bool=?,
~disableRestoreFocus: bool=?,
~hideBackdrop: bool=?,
~keepMounted: bool=?,
~manager: Js.t({..})=?,
~onRendered: ReactEvent.Synthetic.t => unit=?,
~classes: Js.Dict.t(string)=?,~style: ReactDOMRe.Style.t=?, unit) => _ = "";
            [@bs.module "@material-ui/core/Dialog/Dialog"] external reactClass : ReasonReact.reactClass = "default";
            let make = (
                ~_BackdropProps: option(Js.t({..}))=?,
~className: option(string)=?,
~disableBackdropClick: option(bool)=?,
~disableEscapeKeyDown: option(bool)=?,
~fullScreen: option(bool)=?,
~fullWidth: option(bool)=?,
~maxWidth: option(maxWidth)=?,
~onBackdropClick: option(ReactEvent.Mouse.t => unit)=?,
~onClose: option((ReactEvent.Synthetic.t) => unit)=?,
~onEnter: option(ReactEvent.Synthetic.t => unit)=?,
~onEntered: option(ReactEvent.Synthetic.t => unit)=?,
~onEntering: option(ReactEvent.Synthetic.t => unit)=?,
~onEscapeKeyDown: option(ReactEvent.Keyboard.t => unit)=?,
~onExit: option(ReactEvent.Synthetic.t => unit)=?,
~onExited: option(ReactEvent.Synthetic.t => unit)=?,
~onExiting: option(ReactEvent.Synthetic.t => unit)=?,
~open_: bool,
~_PaperProps: option(Js.t({..}))=?,
~_TransitionComponent: option([ | `String(string) | `Callback('genericCallback) | `ObjectGeneric(Js.t({..}))  ])=?,
~transitionDuration: option([ | `Int(int) | `Float(float) | `Object(TransitionDuration_shape.t)  ])=?,
~_TransitionProps: option(Js.t({..}))=?,
~_BackdropComponent: option([ | `String(string) | `Callback('genericCallback) | `ObjectGeneric(Js.t({..}))  ])=?,
~container: option([ | `ObjectGeneric(Js.t({..})) | `Callback('genericCallback)  ])=?,
~disableAutoFocus: option(bool)=?,
~disableEnforceFocus: option(bool)=?,
~disableRestoreFocus: option(bool)=?,
~hideBackdrop: option(bool)=?,
~keepMounted: option(bool)=?,
~manager: option(Js.t({..}))=?,
~onRendered: option(ReactEvent.Synthetic.t => unit)=?,
~classes: option(Classes.t)=?,~style: option(ReactDOMRe.Style.t)=?,
                children
            ) => ReasonReact.wrapJsForReason(
                    ~reactClass,
                    ~props=makeProps(~_BackdropProps=?_BackdropProps,
~className=?className,
~disableBackdropClick=?disableBackdropClick,
~disableEscapeKeyDown=?disableEscapeKeyDown,
~fullScreen=?fullScreen,
~fullWidth=?fullWidth,
~maxWidth=?maxWidth |. Belt.Option.map((v => maxWidthToJs(v))),
~onBackdropClick=?onBackdropClick,
~onClose=?onClose,
~onEnter=?onEnter,
~onEntered=?onEntered,
~onEntering=?onEntering,
~onEscapeKeyDown=?onEscapeKeyDown,
~onExit=?onExit,
~onExited=?onExited,
~onExiting=?onExiting,
~_open=open_,
~_PaperProps=?_PaperProps,
~_TransitionComponent=?_TransitionComponent |. Belt.Option.map((v => MaterialUi_Helpers.unwrapValue(v))),
~transitionDuration=?transitionDuration |. Belt.Option.map((v => MaterialUi_Helpers.unwrapValue(v))),
~_TransitionProps=?_TransitionProps,
~_BackdropComponent=?_BackdropComponent |. Belt.Option.map((v => MaterialUi_Helpers.unwrapValue(v))),
~container=?container |. Belt.Option.map((v => MaterialUi_Helpers.unwrapValue(v))),
~disableAutoFocus=?disableAutoFocus,
~disableEnforceFocus=?disableEnforceFocus,
~disableRestoreFocus=?disableRestoreFocus,
~hideBackdrop=?hideBackdrop,
~keepMounted=?keepMounted,
~manager=?manager,
~onRendered=?onRendered,
~classes=?Belt.Option.map(classes, (v) => Classes.to_obj(v)),~style?, ()),
                    children
                );
        