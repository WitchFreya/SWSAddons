# TFAR

Some info on the various UIs for TFAR radios.

These are used when the `tf_dialog` property is set on a backpack or vehicle; see the [TFAR: API For Developers](https://github.com/michail-nikolaev/task-force-arma-3-radio/wiki/API%3A-For-developers) page. I'm just including the long ranges with this; SRs are different.

`tf_dialog="anprc155_radio_dialog"`

The images for them can be found on TFAR's repo: [extra/dialog_sources](https://github.com/michail-nikolaev/task-force-arma-3-radio/tree/6332aaa7a2099d45246981287c4a167ad8696088/extra/dialog-sources).


Generally in game, they're called `<radioName>_radio_dialog` at the root of `configFile`. For example, the AN/PRC-155 UI would be at `configFile >> "anprc155_radio_dialog"` and have the property `tf_dialog="anprc155_radio_dialog"` on the item itself.

The dialog that most SWS folks will be familiar with is `rt1523g_radio_dialog`.
