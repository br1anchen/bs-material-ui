
            

                module Classes = {
                    type classesType = | Root(string)
| Selected(string);
                    type t = list(classesType);
                    let to_string =
                        fun
                        | Root(_) => "root"
| Selected(_) => "selected";
                    let to_obj = (listOfClasses) =>
                    listOfClasses |. Belt.List.reduce(
                        Js.Dict.empty(),
                        (obj, classType) => {
                            switch classType {
                                | Root(className)
| Selected(className) => Js.Dict.set(obj, to_string(classType), className)
                            };
                            obj
                        },
                    );
                };
            
            [@bs.obj] external makeProps : (~className: string=?,
~component: 'union_r52f=?,
~role: string=?,
~selected: bool=?,
~value: 'union_r1gj=?,
~onFocus: ReactEvent.Focus.t => unit=?,
~onClick: ReactEvent.Mouse.t => unit=?,
~button: bool=?,
~_ContainerComponent: 'union_r23r=?,
~_ContainerProps: Js.t({..})=?,
~dense: bool=?,
~disabled: bool=?,
~disableGutters: bool=?,
~divider: bool=?,
~focusVisibleClassName: string=?,
~classes: Js.Dict.t(string)=?,~style: ReactDOMRe.Style.t=?, unit) => _ = "";
            [@bs.module "@material-ui/core/MenuItem/MenuItem"] external reactClass : ReasonReact.reactClass = "default";
            let make = (
                ~className: option(string)=?,
~component: option([ | `String(string) | `Callback('genericCallback) | `ObjectGeneric(Js.t({..}))  ])=?,
~role: option(string)=?,
~selected: option(bool)=?,
~value: option([ | `String(string) | `Int(int) | `Float(float) | `Array(array(string))  ])=?,
~onFocus: option(ReactEvent.Focus.t => unit)=?,
~onClick: option(ReactEvent.Mouse.t => unit)=?,
~button: option(bool)=?,
~_ContainerComponent: option([ | `String(string) | `Callback('genericCallback) | `ObjectGeneric(Js.t({..}))  ])=?,
~_ContainerProps: option(Js.t({..}))=?,
~dense: option(bool)=?,
~disabled: option(bool)=?,
~disableGutters: option(bool)=?,
~divider: option(bool)=?,
~focusVisibleClassName: option(string)=?,
~classes: option(Classes.t)=?,~style: option(ReactDOMRe.Style.t)=?,
                children
            ) => ReasonReact.wrapJsForReason(
                    ~reactClass,
                    ~props=makeProps(~className=?className,
~component=?component |. Belt.Option.map((v => MaterialUi_Helpers.unwrapValue(v))),
~role=?role,
~selected=?selected,
~value=?value |. Belt.Option.map((v => MaterialUi_Helpers.unwrapValue(v))),
~onFocus=?onFocus,
~onClick=?onClick,
~button=?button,
~_ContainerComponent=?_ContainerComponent |. Belt.Option.map((v => MaterialUi_Helpers.unwrapValue(v))),
~_ContainerProps=?_ContainerProps,
~dense=?dense,
~disabled=?disabled,
~disableGutters=?disableGutters,
~divider=?divider,
~focusVisibleClassName=?focusVisibleClassName,
~classes=?Belt.Option.map(classes, (v) => Classes.to_obj(v)),~style?, ()),
                    children
                );
        