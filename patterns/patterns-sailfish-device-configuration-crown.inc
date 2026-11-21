# Feel free to disable non-critical HA parts during devel by commenting lines out
# Generated in hadk by executing: rpm/dhd/helpers/add_new_device.sh

%package -n patterns-sailfish-device-configuration-crown
Summary: Jolla Configuration crown
Requires: patterns-sailfish-device-configuration-common-crown
Requires: patterns-sailfish-device-adaptation-crown

# Early stages of porting benefit from these:
Requires: patterns-sailfish-device-tools

Requires: sailfish-content-graphics-z%{icon_res}

# Introduced starting Sailfish OS 2.0.4.x:
# 3rd party accounts like Twitter, VK, cloud services, etc
Requires: jolla-settings-accounts-extensions-3rd-party-all

# Introduced starting Sailfish OS 2.1.1.26
# Required for Jolla Store Access
Requires: patterns-sailfish-consumer-generic

# Devices with 2G or more memory should also include this booster
# to improve camera startup times and the like
Requires: mapplauncherd-booster-silica-qt5-media

# bloat
Recommends: harbour-storeman
Recommends: sailfishos-chum-gui
Recommends: punky 
Recommends: verdandiupdater-sfos

# Remove busybox
Requires: gnu-bash
Requires: gnu-coreutils
Requires: gnu-diffutils
Requires: gnu-findutils
Requires: gnu-grep
Requires: gnu-gzip
Requires: gnu-sed
Requires: gnu-tar
Requires: gnu-which

# VerdandiTeam branding
Requires: verdanditeam-branding

%description -n patterns-sailfish-device-configuration-crown
Pattern with packages for crown configurations

%files -n patterns-sailfish-device-configuration-crown
