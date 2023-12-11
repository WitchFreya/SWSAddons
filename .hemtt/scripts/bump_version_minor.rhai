// Read the current contents of script_version.hpp
let script_version = HEMTT_RFS.join("addons")
    .join("main")
    .join("script_version.hpp")
    .open_file()
    .read();

// Replace the current version with the new version
let minorPrefix = "#define MINOR ";
let patchPrefix = "#define PATCH ";
let version = HEMTT.project().version();
let minor = version.minor();
let patch = version.patch();

script_version.replace(minorPrefix + minor.to_string(), minorPrefix + (minor + 1).to_string());
script_version.replace(patchPrefix + patch.to_string(), patchPrefix + "0");

// Write the modified contents to script_version.hpp
HEMTT_RFS.join("addons")
    .join("main")
    .join("script_version.hpp")
    .create_file()
    .write(script_version);
