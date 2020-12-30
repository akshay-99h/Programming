# Material Design Iconic Font

This package includes individual files for each icon, ready to be imported into a project.

Each icon is in its own file, so you can bundle several icons from different icon sets without bundling entire icon sets.

## Installation

If you are using NPM:

```bash
npm install @iconify/icons-zmdi --save-dev
```

If you are using Yarn:

```bash
yarn add --dev @iconify/icons-zmdi
```

## Usage with React

First you need to install [Iconify for React](https://github.com/iconify/iconify/packages/react).

If you are using NPM:

```bash
npm install --save-dev @iconify/react
```

If you are using Yarn:

```bash
yarn add --dev @iconify/react
```

### Example using icon 'alarm-snooze' with React

```js
import { Icon, InlineIcon } from '@iconify/react';
import alarmSnooze from '@iconify/icons-zmdi/alarm-snooze';
```

```jsx
<Icon icon={alarmSnooze} />
<p>This is some text with icon adjusted for baseline: <InlineIcon icon={alarmSnooze} /></p>
```

### Example using icon 'cloud-off' with React

This example is using string syntax that is available since Iconify for React 2.0

This example will not work with Iconify for React 1.x

```jsx
import React from 'react';
import { Icon, addIcon } from '@iconify/react';
import cloudOff from '@iconify/icons-zmdi/cloud-off';

addIcon('cloudOff', cloudOff);

export function MyComponent() {
	return (
		<div>
			<Icon icon="cloudOff" />
		</div>
	);
}
```

### Example using icon 'library' with React

```jsx
import React from 'react';
import { InlineIcon } from '@iconify/react';
import libraryIcon from '@iconify/icons-zmdi/library';

export function MyComponent() {
	return (
		<p>
			<InlineIcon icon={libraryIcon} /> Sample text with an icon.
		</p>
	);
}
```

See https://github.com/iconify/iconify/packages/react for details.

## Usage with Vue

First you need to install [Iconify for Vue](https://github.com/iconify/iconify/packages/vue).

If you are using NPM:

```bash
npm install --save-dev @iconify/vue
```

If you are using Yarn:

```bash
yarn add --dev @iconify/vue
```

### Example using icon 'alarm-snooze' with Vue

This example is using object syntax with TypeScript.

```vue
<template>
	<p>
		<iconify-icon :icon="icons.alarmSnooze" />
	</p>
</template>

<script lang="ts">
import { Component, Prop, Vue } from 'vue-property-decorator';
import IconifyIcon from '@iconify/vue';
import alarmSnooze from '@iconify/icons-zmdi/alarm-snooze';

export default Vue.extend({
	components: {
		IconifyIcon,
	},
	data() {
		return {
			icons: {
				alarmSnooze: alarmSnooze,
			},
		};
	},
});
</script>
```

### Example using icon 'cloud-off' with Vue

This example is using string syntax.

```vue
<template>
	<p>
		Example of 'cloud-off' icon:
		<iconify-icon icon="cloudOff" :inline="true" />!
	</p>
</template>

<script>
import IconifyIcon from '@iconify/vue';
import cloudOff from '@iconify/icons-zmdi/cloud-off';

IconifyIcon.addIcon('cloudOff', cloudOff);

export default {
	components: {
		IconifyIcon,
	},
};
</script>
```

### Example using icon 'library' with Vue

This example is using object syntax.

```vue
<template>
	<iconify-icon :icon="icons.libraryIcon" />
</template>

<script>
import IconifyIcon from '@iconify/vue';
import libraryIcon from '@iconify/icons-zmdi/library';

export default {
	components: {
		IconifyIcon,
	},
	data() {
		return {
			icons: {
				libraryIcon,
			},
		};
	},
};
</script>
```

See https://github.com/iconify/iconify/packages/vue for details.

## Usage with Svelte

First you need to install [Iconify for Svelte](https://github.com/iconify/iconify/packages/svelte).

If you are using NPM:

```bash
npm install --save-dev @iconify/svelte
```

If you are using Yarn:

```bash
yarn add --dev @iconify/svelte
```

### Example using icon 'alarm-snooze' with Svelte

```svelte
<script>
    // npm install --save-dev @iconify/svelte @iconify/icons-zmdi
    import IconifyIcon from '@iconify/svelte';
    import alarmSnooze from '@iconify/icons-zmdi/alarm-snooze';
</script>

<IconifyIcon icon={alarmSnooze} />
```

### Example using icon 'cloud-off' with Svelte

```svelte
<script>
    // npm install --save-dev @iconify/svelte @iconify/icons-zmdi
    import IconifyIcon from '@iconify/svelte';
    import cloudOff from '@iconify/icons-zmdi/cloud-off';
</script>

<IconifyIcon icon={cloudOff} />
```

### Example using icon 'library' with Svelte

```svelte
<script>
    // npm install --save-dev @iconify/svelte @iconify/icons-zmdi
    import IconifyIcon from '@iconify/svelte';
    import libraryIcon from '@iconify/icons-zmdi/library';
</script>

<IconifyIcon icon={libraryIcon} />
```

See https://github.com/iconify/iconify/packages/svelte for details.

## About Material Design Iconic Font

Icons author: MDI Community

Website: https://github.com/zavoloklom/material-design-iconic-font

License: Open Font License

License URL: http://scripts.sil.org/OFL
